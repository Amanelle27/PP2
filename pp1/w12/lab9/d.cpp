#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <sstream>
#include <cmath>

using namespace std;
int k = 4;




int main() {
    string s;
    cin >> s;
    stack <char> stk;
    for (int i = 0; i < s.size(); i++) {
        if (stk.empty()) {
            stk.push(s[i]);
            continue;
        }
        string twodigs = string(1, stk.top()) + string(1, s[i]);
        if (twodigs == "16" || twodigs == "25" || twodigs == "36" || twodigs == "49" || twodigs == "64" || twodigs == "81") {
            stk.pop();
        }
        else stk.push(s[i]);
    }
    if (stk.empty()) cout << "Stack is empty" <<endl;
    else {
        int size = stk.size();
        for (int i = 0; i < size; i++) {
            cout << stk.top();
            stk.pop();
        }
    }
    return 0;
}