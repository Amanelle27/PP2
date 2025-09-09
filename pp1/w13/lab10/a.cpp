#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

struct points {
    int x, y;
    int x1, y1;
    void taking_points() {
        cin >> x1 >> y1;
    }
    float measuring_distance() {
        float res;
        int t = (x-x1)*(x-x1) + (y-y1)*(y-y1);
        res = sqrt(t);
        return res;
    }
};

bool cmp (pair <float, pair <int, int> > p1, pair <float, pair <int, int> > p2) {
    if (p1.first != p2.first) return p1.first < p2.first;
    else return true;
}

int main() {
    points p;
    int x, y;
    cin >> x >> y;
    p.x = x;
    p.y = y;
    int n;
    cin >> n;
    vector <pair <float, pair <int, int> > > v(n);
    for (int i = 0; i < n; i++) {
        p.taking_points();
        pair <int, int> p1 = make_pair(p.x1, p.y1);
        pair <float, pair <int, int> > p2 = make_pair(p.measuring_distance(), p1);
        v[i] = p2;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        cout << (v[i].second).first << ' ' << (v[i].second).second <<endl;
    }
    return 0;
} 