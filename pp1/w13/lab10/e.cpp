#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    map <int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]]++;
    }
    int qua = (n+1)/2;
    bool res = true;
    map <int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if (it->second > qua) {
            res = false;
            break;
        }
    }
    if (res) cout << "Possible" <<endl;
    else cout << "Impossible" <<endl;

    
    return 0;
} 