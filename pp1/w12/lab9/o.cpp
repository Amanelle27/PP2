#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

bool isPalindrome(vector <int> v1) {
    vector <int> v2(v1.size());
    for (int i = 0; i < v1.size(); i++) {
        v2[i] = v1[i];
    }
    reverse (v2.begin(), v2.end());
    if (v1 == v2) return true;
    else return false;
}


int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort (v.begin(), v.end());
    set <vector <int> > s;
    do {
        s.insert(v);
    } while (next_permutation(v.begin(), v.end()));

    set <vector <int> >::iterator it;
    bool res = false;
    for (it = s.begin(); it != s.end(); it++) {
        if (isPalindrome(*it)) {
            for (int i = 0; i < (*it).size(); i++) {
                cout << (*it)[i] << ' ';
            }
            cout <<endl;
            res = true;
            break;
        }
    }
    if (!res) cout << "Impossible" <<endl;
    return 0;
}