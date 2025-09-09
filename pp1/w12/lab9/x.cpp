#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

using namespace std;



int main() {
    string x;
    cin >> x;
    vector <string> v;
    sort(x.begin(), x.end());
    reverse(x.begin(), x.end());
    do {
        v.push_back(x);
    } while(prev_permutation(x.begin(), x.end()));
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    return 0;
}