#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack <int> stk;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(stk.empty()) stk.push(x);
        else if(stk.top() <= x) {
            while(!stk.empty() && stk.top() <= x) {
                stk.pop();
            }
            stk.push(x);
        }
        else stk.push(x);
        cout << stk.size() << ' ';
    }
    return 0;
} 