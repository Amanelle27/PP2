#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;



int main() {
    int n, m;
    cin >> n >> m;
    set <int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    set <int>::iterator it;
    for (it = s.begin(); it != s.end(); it++) {
        cout << *it << ' ';
    }
    return 0;
}