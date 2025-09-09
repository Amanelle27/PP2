#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <algorithm>
#include <set>

using namespace std;



int main() {
    int n;
    cin >> n;
    set <int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    set <int>::iterator it;
    int cnt = 1;
    for (it = s.begin(); it != s.end(); it++) {
        cout << cnt << ' ' << *it <<endl;
        cnt++;
    }
    return 0;
}