#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
#include <sstream>
#include <cmath>
#include <iomanip> 

using namespace std;


void percent (double x, double sum) {
    cout << setprecision(6) << (x/sum)*100 <<endl;  
}


int main() {
    int n;
    cin >> n;
    map <string, int> mapa;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++) {
            string s;
            int x;
            cin >> s >> x;
            mapa[s] += x;
        }
    }
    map <string, int>::iterator it;
    int sum = 0;
    for (it = mapa.begin(); it != mapa.end(); it++) {
        sum += it->second;
    }
    for (it = mapa.begin(); it != mapa.end(); it++) {
        cout << it->first << ' ';
        percent(it -> second, sum);
    }

    return 0;
}