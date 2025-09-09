#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp (int a, int b) {
    if (a%2 == 0 && b%2 ==0) return a > b;
    else if (a%2 != 0 && b%2 != 0) return a < b;
    else return a%2 == 0;
}

int main () {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort (v.begin(), v.end(), cmp);
     for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
     }


    return 0;
}