#include <iostream>
#include <vector>
#include <set>
#include <stack>

using namespace std;

// problem y

int main() {
    string ss;
    cin >> ss;
    stack <char> s;
    for (int i = 1; i <= ss.size(); i++) {
        if (ss.empty()) s.push(ss[i]);
        else if (s.top() != ss[i]) s.push(ss[i]);
        else s.pop();
    }
    if (s.empty()) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}