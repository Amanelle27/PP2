#include <iostream>
#include <stack>

using namespace std;

int main () {
    string s;
    cin >> s;
    stack <char> stk;
    for (int i = 0; i < s.size(); i++) {
        if (stk.empty()) stk.push(s[i]);
        else if (s[i] == '(' || s[i] == '{' || s[i] == '[') stk.push(s[i]);
        else if (s[i] == ')' && stk.top() == '(') stk.pop();
        else if (s[i] == '}' && stk.top() == '{') stk.pop();
        else if (s[i] == ']' && stk.top() == '[') stk.pop();
    }
    if (stk.empty()) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}