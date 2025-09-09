#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector <pair <int, int> > v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        pair<int, int> p = make_pair(x, y);
        v.push_back(p);
    }
    vector <pair <int, int> > v2;
    for (int i = 0; i < n; i++) {
        int sum = v[i].first+v[i].second;
        pair <int, int> p = make_pair(sum, i+1);
        v2.push_back(p);
    }
    sort (v2.begin(), v2.end());
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i].second << ' ';
    }
    return 0;
} 