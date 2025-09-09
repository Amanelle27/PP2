#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> ogv(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ogv[i] = v[i]; 
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == ogv[i]) continue;
        else {
            cnt++;
        }
    }
    if (cnt <= 2 ) cout << "YES" <<endl;
    else cout << "NO" <<endl;
    return 0;
}