#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

using namespace std;

bool cmp (vector <int> v1, vector <int> v2) {
    if (v1[0] != v2[0]) return v1[0] < v2[0];
    else if (v1[1] != v2[1]) return v1[1] < v2[1];
    else if (v1[2] != v2[2]) return v1[2] < v2[2];
    else return true;
}

int main() {
    int n;
    cin >> n;
    vector <vector <int> > v(n);
    for (int i = 0; i < n; i++) {
        int hr, min, sec;
        cin >> hr >> min >> sec;
        v[i].push_back(hr);
        v[i].push_back(min);
        v[i].push_back(sec);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < n; i++) {
        cout << v[i][0] << ' ' << v[i][1] << ' ' << v[i][2] <<endl;
    }

    return 0;
}