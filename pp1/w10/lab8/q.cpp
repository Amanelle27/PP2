#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool sells = false;
    stack <int> stk;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            cout << stk.top() << ' ';
            stk.pop();
            sells = true;
        }
        else stk.push(x);
    }
    if (!sells) cout << -1 <<endl;
    return 0;
} 