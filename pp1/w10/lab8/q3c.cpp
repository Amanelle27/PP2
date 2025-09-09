#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;




int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[n];
    }
    int l, r;
    cin >> l >> r;
    reverse(v.begin()+l, v.begin()+r+1);
    for (int i = 0; i < n; i++) {
        cout << v[n];
    }

    return 0;
} 