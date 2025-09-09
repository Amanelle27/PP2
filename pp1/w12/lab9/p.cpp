#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

using namespace std;

void toBinary(long long &a) {
    string sres;
    while (a > 0) {
        sres += (a%2 + '0');
        a /= 2;
    }
    reverse(sres.begin(), sres.end());
    stringstream ss;
    ss << sres;
    long long res;
    ss >> res;
    a = res;
}


int main() {
    int n;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for_each(v.begin(), v.end(), toBinary);
    for (int i = 0; i < n; i++) {
        cout << v[i] <<endl;
    }
    return 0;
}