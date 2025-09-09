#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;



int main() {
    int n;
    cin >> n;
    map <string, string> m;
    for (int i = 0; i < n*2; i += 2) {
        string word;
        string trans;
        cin >> word >> trans;
        m[word] = trans;
    }
    string eras;
    cin >> eras;
    m[eras] = '0';
    map <string, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if (it -> second != "0") cout << it -> first << ' ' << it -> second <<endl;
    }
    return 0;
} 