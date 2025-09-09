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
    cout << count_if(v.begin(), v.end(), isEven)<< endl;

    return 0;
}