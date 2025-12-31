#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int prio(char ch) {
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' || ch == '/') return 2;
    return 0;
}

// Convert infix to prefix
string infixToPrefix(string s) {
    // Step 1: Reverse string
    reverse(s.begin(), s.end());

    // Step 2: Swap brackets
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') s[i] = ')';
        else if(s[i] == ')') s[i] = '(';
    }

    stack<char> op;
    stack<string> val;

    // Step 3: Convert to postfix in reversed string
    for(int i = 0; i < s.length(); i++) {
        if(isalnum(s[i])) { // operand
            val.push(string(1, s[i]));
        }
        else if(s[i] == '(') {
            op.push(s[i]);
        }
        else if(s[i] == ')') {
            while(!op.empty() && op.top() != '(') {
                char ch = op.top(); op.pop();
                string val1 = val.top(); val.pop();
                string val2 = val.top(); val.pop();
                string exp = ch + val2 + val1; // prefix order
                val.push(exp);
            }
            op.pop(); // remove '('
        }
        else { // operator
            while(!op.empty() && prio(op.top()) >= prio(s[i])) {
                char ch = op.top(); op.pop();
                string val1 = val.top(); val.pop();
                string val2 = val.top(); val.pop();
                string exp = ch + val2 + val1;
                val.push(exp);
            }
            op.push(s[i]);
        }
    }

    // Step 4: Empty remaining operators
    while(!op.empty()) {
        char ch = op.top(); op.pop();
        string val1 = val.top(); val.pop();
        string val2 = val.top(); val.pop();
        string exp = ch + val2 + val1;
        val.push(exp);
    }

    return val.top();
}

int main() {
    string s = "((2+6)*4)/(8/3)";
    cout << "Infix: " << s << endl;
    cout << "Prefix: " << infixToPrefix(s) << endl;
}
