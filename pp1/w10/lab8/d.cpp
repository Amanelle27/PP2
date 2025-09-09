#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


int main () {
    int n, p;
    cin >> n >> p;
    map <int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }

    cout << m[p] <<endl;

    return 0;
}