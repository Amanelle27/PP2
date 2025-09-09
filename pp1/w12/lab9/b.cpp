#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <sstream>

using namespace std;

bool cmp (pair <string, int> p1, pair <string, int> p2) {
    if (p1.first != p2.first) return p1.first < p2.first;
    else return p1.second < p2.second;
}


int main() {
    int n;
    cin >> n;
    vector <string> vs;
    vector <int> vi;
    for (int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        vs.push_back(s);
        vi.push_back(x);
    }
    sort (vs.begin(), vs.end());
    sort (vi.begin(), vi.end());
    for (int i = 0; i < n; i++) {
        cout << vs[i] << ' ' << vi[i] <<endl;
    }

    return 0;
}