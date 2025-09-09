#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n, q, t;    
    cin >> n;
    map <int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    cin >> q;
    vector <int> res;
    for (int i = 0; i < q; i++) {
        int t;
        cin >> t;
        res.push_back(m[t]);
    }
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] <<endl; 
    }
    return 0;   
}