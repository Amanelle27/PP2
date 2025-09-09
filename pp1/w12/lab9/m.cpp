#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    n = abs(n);
    if (n == 1 || n == 0) return false;
    for (int i = 2; i < n-1; i++) {
        if (n%i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int sum = (n*(1+n))/2;
    vector <int> v(sum);
    int ind = 0;
    for (int i = 1; i <= n; i++) {
        fill(v.begin()+ind, v.begin()+ind+i, i);
        ind += i;
    }

    for (int i = 0; i < sum; i++) {
        cout << v[i] << ' ';
    }
    return 0;
}