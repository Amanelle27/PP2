#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>

using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector <int> v1(n);
    vector <int> v2(m);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }
    v1.erase(unique(v1.begin(), v1.end()), v1.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());
    vector <int> v(v1.size()+v2.size());
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < v1.size()+v2.size(); i++) {
        if(i%2 == 0) {
            v[i] = v1[cnt1];
            cnt1++;
        } 
        else {
            v[i] = v2[cnt2];
            cnt2++;
        }
    }
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    return 0;
}