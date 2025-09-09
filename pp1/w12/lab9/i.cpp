#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>

using namespace std;

bool isXinVec2times (int x, vector <int> v) {
    int res = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) res++;
    }
    if (res > 1) return true;
    else return false;

}

int main() {
    int n;
    cin >> n;
    vector <int> v;
    map <int, bool> m;
    for (int i = 0; i < n; i++){
        int x;
        cin >>x;
        if (m[x] == false) {
            v.push_back(x);
            m[x] = true;
        }
    }
    set <vector <int> > s;
    do {
        s.insert(v);
    } while( next_permutation(v.begin(), v.end()));

    set <vector <int> >::iterator it;
    for (it = s.begin(); it != s.end(); it++) {
        for (int i = 0; i < (*it).size(); i++) {
            cout << (*it)[i] << ' ';
        }
        cout <<endl;
    }
    return 0;
}