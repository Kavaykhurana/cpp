#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int n) {
        if (n <= 1) return false;
        int sum = 0;
        for (int i = 1; i <= sqrt(n); i++) {
            if (n % i == 0) {
                sum += i;
                if (i * i != n) {
                    sum += n / i;
                }
            }
        }
        return sum == n;
    }
};

int main() {
    Solution s;
    int n = 28;
    cout << s.checkPerfectNumber(n) << endl;
    return 0;
}