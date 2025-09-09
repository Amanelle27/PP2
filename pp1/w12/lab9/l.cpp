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
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << count_if(v.begin(), v.end(), isPrime) <<endl;
    return 0;
}