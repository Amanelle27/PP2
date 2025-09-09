#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <sstream>
#include <cmath>

using namespace std;

int k = 0;

long long pow1() {
    long long res = 1;
    for (int i = 0; i < k; i++) {
        res *= k;
    }
    ++k;
    return res;
}

int main() {
    int n;
    cin >> n;
    vector <long long> v(n+1);
    generate(v.begin(), v.end(), pow1);
    for (int i = 0; i <= n; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}