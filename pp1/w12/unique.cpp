#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isEven (int a) {
    return a%2==0;
}

int main() {
    
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector <int>::iterator it;
    it = unique(v.begin(), v.end());  //unique returns iterator
    v.erase(it, v.end()); //can be done without an iterator
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}