#include <iostream>
#include <stack>
using namespace std;

int solve(int v1, int v2, char ch) {
    if (ch == '+') return v1 + v2;
    else if (ch == '-') return v1 - v2;
    else if (ch == '*') return v1 * v2;
    else if (ch == '/') return v1 / v2;
    return 0; // default
}

int main() {
    string s = "-+2/*6483"; // example prefix expression

    stack<int> val;

    // Loop from right to left
    for (int i = s.length() - 1; i >= 0; i--) {
        if (isdigit(s[i])) {
            val.push(s[i] - '0'); // char to int
        } else {
            int v1 = val.top(); val.pop();
            int v2 = val.top(); val.pop();
            int ans = solve(v1, v2, s[i]);
            val.push(ans);
        }
    }

    cout << "Result: " << val.top();
}
 