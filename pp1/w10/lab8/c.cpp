#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;


int main () {
    int n;
    cin >> n;
    map <int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }

    int cnt = 0;
    map <int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        if(m[it->first] > 1) cnt++; 
    }

    cout << cnt <<endl;

    return 0;
}