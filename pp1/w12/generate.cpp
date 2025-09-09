#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int k = 0;

int sequenceGen() {  
    return ++k;   
}               

int main() {
    
    int n;
    cin >> n;
    vector <int> v(n);
    generate(v.begin(), v.end(), sequenceGen);   // it has to have size
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}