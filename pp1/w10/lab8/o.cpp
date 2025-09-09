#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, string> m;
    for (int i = 1; i <= n; i++) {
        string nn, p;
        cin >> nn >> p;
        m[nn] = p;
    }
    int n2;
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        string nn, p;
        cin >> nn >> p;
        if (m[nn] == p) {
            cout << "correct password" <<endl;
        }
        else if (m[nn].empty()){
            cout << "login error"<<endl;
        }
        else {
            cout << "password error" <<endl;
        }
    }
    return 0;
} 