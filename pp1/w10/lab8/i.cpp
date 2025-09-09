#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, bool> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if (m[s] == 0) {
            cout << "new user added" <<endl;
            m[s] = true;
        }
        else {
            cout << "user already exists" <<endl;
        }
    }
    return 0;
} 