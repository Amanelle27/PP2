#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <sstream>

using namespace std;


int main () {
    string s;
    cin >> s;
    stringstream ss;
    ss << s;
    stack <char> stk;
    char x;
    for (int i = 0; i < s.size(); i++) {
        ss >> x;
        if (x == '(') stk.push(x);
        else if (!stk.empty() && stk.top() == '(') stk.pop();
        else stk.push(x);
    }
    if (stk.empty()) cout << "YES" <<endl;
    else cout << "NO" <<endl;

    return 0;
}