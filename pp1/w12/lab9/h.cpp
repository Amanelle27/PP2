#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <sstream>
#include <cmath>
#include <iomanip> 

using namespace std;



int main() {
    int n;
    cin >> n;
    map <pair <pair <string, int>, pair <string, int> >, bool > m;
    for (int i = 0; i < n; i++) {
        string st;
        int sc;
        cin >> st >> sc;
        pair <string, int> p1 = make_pair(st, sc);
        cin >> st >> sc;
        pair <string, int> p2 = make_pair(st, sc);
        pair <pair <string, int>, pair <string, int> > p = make_pair(p1, p2);
        m[p] = true;
    }
    map <pair <pair <string, int>, pair <string, int> >, bool >::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << ((it->first).first).first << " and " << ((it -> first).second).first << ' ' << ((it->first).first).second+((it -> first).second).second <<endl;
    }
    return 0;
}