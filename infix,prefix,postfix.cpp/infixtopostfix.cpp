#include<iostream>
#include<stack>
using namespace std;

int prio(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}

// Combine two strings in postfix form
string solve(string val1, string val2, char c) {
    return val1 + val2 + c; 
}

int main() {
    string s = "2+6*4/8/3"; // infix expression
    stack<string> val;      // stores partial postfix expressions
    stack<char> op;         // stores operators

    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= '0' && s[i] <= '9') { // digit
            val.push(string(1, s[i]));
        }
        else { // operator
            if(op.empty() || prio(s[i]) > prio(op.top())) 
                op.push(s[i]);
            else {
                while(!op.empty() && prio(s[i]) <= prio(op.top())) {
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top(); val.pop();
                    string val1 = val.top(); val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while(!op.empty()) {
        char ch = op.top();
        op.pop();
        string val2 = val.top(); val.pop();
        string val1 = val.top(); val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout << val.top();
}
