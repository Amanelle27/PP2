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
int y;

bool cmp (pair <string, int> p1, pair <string, int> p2) {
    if (p1.second != p2.second) return p1.second > p2.second;
    else return p1.first < p2.first;
}


int main() {
    map <string, int> m;
    string s;
    getline (cin, s); 
    stringstream ss;
    ss << s;
    while (ss >> s) {
        m[s]++;
    }
    vector <pair <string, int> > vp;
    map <string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        pair <string, int> p = make_pair(it -> first, it-> second);
        vp.push_back(p);
    }
    sort (vp.begin(), vp.end(), cmp);
    for (int i = 0; i < vp.size(); i++) {
        cout << vp[i].first << " : " << vp[i].second <<endl;
    }

    return 0;
}