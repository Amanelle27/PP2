#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>
#include <deque>

using namespace std;




int main() {
    string s1, s2;
    cin >> s1 >> s2;
    stack <char> stk1;
    stack <char> stk2;
    for (int i = 0; i < s1.size(); i++) {
        if (stk1.empty() && s1[i] == '#');
        else if (stk1.empty()) stk1.push(s1[i]);
        else if ('#' == s1[i]) stk1.pop();
        else stk1.push(s1[i]);
    }
    for (int i = 0; i < s2.size(); i++) {
        if (stk2.empty() && s2[i] == '#');
        else if (stk2.empty()) stk2.push(s2[i]);
        else if ('#' == s2[i]) stk2.pop();
        else stk2.push(s2[i]);
    }
    if (stk1 == stk2) cout << "True" <<endl;
    else cout << "False" <<endl;
    
    return 0;
}   