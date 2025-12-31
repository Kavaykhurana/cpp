// #include<iostream>
// #include<vector>
// using namespace std;
//     void combination(vector<vector<int>>& ans, vector<int> v, vector<int>& candidates, int target, int idx){
//         if (target==0) {
//             ans.push_back(v);
//             return;
//         }
//         if (target<0) return;
//         for(int i=idx;i<candidates.size();i++){
//             v.push_back(candidates[i]);
//             combination(ans, v, candidates, target-candidates[i], i);
//             v.pop_back();
//         }
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> v;
//         combination(ans, v, candidates, target, 0);
//         return ans;
//     }
// int main(){

// }

#include <iostream>
#include <vector>
using namespace std;

void combination(vector<vector<int>>& ans, vector<int> v, vector<int>& candidates, int target, int idx) {
    if (target == 0) {
        ans.push_back(v);
        return;
    }
    if (target < 0) return;
    for (int i = idx; i < candidates.size(); i++) {
        v.push_back(candidates[i]);
        combination(ans, v, candidates, target - candidates[i], i); // Allow same element
        v.pop_back(); // Backtrack
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> v;
    combination(ans, v, candidates, target, 0);
    return ans;
}

int main() {
    vector<int> candidates = {2, 3, 6, 7}; // Example input
    int target = 7; // Example target

    vector<vector<int>> result = combinationSum(candidates, target);

    // Print the result
    cout << "Combinations that sum to " << target << ":\n";
    for (const auto& comb : result) {
        cout << "[";
        for (size_t i = 0; i < comb.size(); i++) {
            cout << comb[i];
            if (i < comb.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}
