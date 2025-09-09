#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void multiplyByTwo(int &a) {  // means that whats happens to a happens to vector's element;
    a *= 2;                   // it called reference
}

int main() {
    
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for_each(v.begin(), v.end(), multiplyByTwo);
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}