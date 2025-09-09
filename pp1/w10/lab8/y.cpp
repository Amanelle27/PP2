#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>
#include <deque>

using namespace std;




int main() {
    string s;
    cin >> s;
    stack <char> stk;
    for (int i = 0; i < s.size(); i++) {
        if (stk.empty()) stk.push(s[i]);
        else if (stk.top() == s[i]) stk.pop();
        else stk.push(s[i]);
    }
    if (stk.empty()) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    
    return 0;
}   