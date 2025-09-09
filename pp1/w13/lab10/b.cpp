#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;



int main() {
    int n;
    cin >> n;
    map <int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    int mx = 0;
    map <int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if (mx < it->second) mx = it->second;
    }

    for (it = m.begin(); it != m.end(); it++) {
        if (it->second == mx) {
            cout << it->first <<endl;
            break;
        }
    }

    return 0;
} 