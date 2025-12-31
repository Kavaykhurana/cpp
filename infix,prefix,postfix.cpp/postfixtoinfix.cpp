#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s = "264*83//+"; // postfix expression

    stack<string> val; // store operands and intermediate expressions

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') { // digit
            val.push(string(1, s[i]));
        } else { // operator
            string val2 = val.top(); val.pop();
            string val1 = val.top(); val.pop();
            string ans = "(" + val1 + s[i] + val2 + ")"; // combine with brackets
            val.push(ans);
        }
    }

    cout << "Infix: " << val.top();
}
