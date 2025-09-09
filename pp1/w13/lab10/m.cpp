#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> m;
    for (int i = 0; i < n; i++) {
        string s1, s2;
        cin >> s1 >> s2;
        m[s1]++;
    }
    map <string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if (it -> second >= 3) {
            cout << it -> first << " is hacked" <<endl;
        }
        else {
            cout << it -> first << " is valid" <<endl;
        }
    }
    return 0;
}