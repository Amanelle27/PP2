#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> m;
    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        if (m[s] == 0) m[s] = i;
    }
    map <string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it-> first << ' ' << it -> second <<endl;
    }
    return 0;
} 