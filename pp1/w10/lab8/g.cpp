#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    stringstream ss;
    ss << s;
    char x;
    stack <char> stk;
    for (int i = 0; i < s.size(); i++) {
        ss >> x;
        if (stk.empty()) stk.push(x);
        else if (stk.top() == '0' || x == '0') stk.push(x);
        else stk.pop();
    }
    string res;
    while (!stk.empty()) {
        res += stk.top();
        stk.pop();
    }
    reverse(res.begin(), res.end());
    cout << res <<endl;


    return 0;
} 