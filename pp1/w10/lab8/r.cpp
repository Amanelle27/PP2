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
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (v[j] <= v[i]) {
                v[i] -= v[j];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] <<' ';
    }
    return 0;
} 