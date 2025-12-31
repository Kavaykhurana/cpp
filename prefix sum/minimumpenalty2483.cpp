#include <iostream>
using namespace std;
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        int pre[n + 1]; // no of N before kth hour
        int suf[n + 1]; // no of Y after and including kth hour

        pre[0] = 0;
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + (customers[i] == 'N');
        }

        suf[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = suf[i + 1] + (customers[i] == 'Y');
        }

        int minPenalty = n;
        for (int i = 0; i <= n; i++) {
            minPenalty = min(minPenalty, pre[i] + suf[i]);
        }

        return minPenalty;
    }
};

int main() {
    string customers = "YYNY";
    Solution solution;
    int bestTime = solution.bestClosingTime(customers);
    cout << "Best time to close the shop: " << bestTime << endl;
    return 0;
}