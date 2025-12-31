// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     vector<int> result;
//     if(matrix.empty()) return result;
    
//     int m = matrix.size(), n = matrix[0].size();
//     int top = 0, bottom = m-1, left = 0, right = n-1;
    
//     while(top <= bottom && left <= right) {
//         for(int i = left; i <= right; ++i) result.push_back(matrix[top][i]);
//         ++top;
//         for(int i = top; i <= bottom; ++i) result.push_back(matrix[i][right]);
//         --right;
//         if(top <= bottom) {
//             for(int i = right; i >= left; --i) result.push_back(matrix[bottom][i]);
//             --bottom;
//         }
//         if(left <= right) {
//             for(int i = bottom; i >= top; --i) result.push_back(matrix[i][left]);
//             ++left;
//         }
//     }
//     return result;
// }

// int main() {
//     vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     vector<int> result = spiralOrder(matrix);
    
//     cout << "Spiral order: ";
//     for(int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
    
//     return 0;
// }


#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }
  return true;
}

int smallestValueAfterReplacingWithSumOfPrimeFactors(int n) {
  int m = n;
  int sum = 0;
  while (m > 1) {
    for (int i = 2; i <= sqrt(m); i++) {
      if (m % i == 0 && isPrime(i)) {
        sum += i;
        while (m % i == 0) {
          m /= i;
        }
      }
    }
    if (sum == n) return n;
    n = sum;
    sum = 0;
  }
  return n;
}

int main() {
  int n;
  cin >> n;
  cout << smallestValueAfterReplacingWithSumOfPrimeFactors(n) << endl;
  return 0;
}