#include<iostream>
#include<stack>
using namespace std;

int prio(char ch) {
    if (ch == '+' || ch == '-') return 1;
    else if (ch == '*' || ch == '/') return 2;
    return 0;
}

string solve(string val1, string val2, char c) {
    return val1 + val2 + c; // postfix format
}

int main() {
    string s = "((2+6)*4)/(8/3)"; // infix with brackets

    stack<string> val; // stores postfix parts
    stack<char> op;    // stores operators

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') continue; // skip spaces

        if (isdigit(s[i])) { // operand
            val.push(string(1, s[i]));
        }
        else if (s[i] == '(') {
            op.push(s[i]);
        }
        else if (s[i] == ')') {
            while (!op.empty() && op.top() != '(') {
                char ch = op.top(); op.pop();
                string val2 = val.top(); val.pop();
                string val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.pop(); // remove '('
        }
        else { // operator
            while (!op.empty() && prio(op.top()) >= prio(s[i])) {
                char ch = op.top(); op.pop();
                string val2 = val.top(); val.pop();
                string val1 = val.top(); val.pop();
                val.push(solve(val1, val2, ch));
            }
            op.push(s[i]);
        }
    }

    // pop remaining operators
    while (!op.empty()) {
        char ch = op.top(); op.pop();
        string val2 = val.top(); val.pop();
        string val1 = val.top(); val.pop();
        val.push(solve(val1, val2, ch));
    }

    cout << "Postfix: " << val.top();
}
