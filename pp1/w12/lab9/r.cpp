#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

using namespace std;

int x = 1;

int seq() {
    return x++;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    generate(v.begin(), v.end(), seq);
    set <vector <int> > s;
    do {
        s.insert(v);
    } while(next_permutation(v.begin(), v.end()));
    set <vector <int> >::iterator it;
    int res = 0;
    for (it = s.begin(); it != s.end(); it++) {
        int cnt = 0; 
        for (int i = 0; i < (*it).size(); i++) {
            if (i+1 == (*it)[i]) cnt++;
        }
        if (cnt == k) res++;
    }
    cout << res <<endl;
    
    return 0;
}