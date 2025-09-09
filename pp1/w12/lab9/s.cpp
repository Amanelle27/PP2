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
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort (v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    set <vector <int> > s;
    do {
        s.insert(v);
    } while(next_permutation(v.begin(), v.end()));

    set <vector <int> >::iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        for (int i = 0; i < (*it).size(); i++) {
            cout << (*it)[i] << ' ';
        }
        cout <<endl;
    }
    
    
    return 0;
}