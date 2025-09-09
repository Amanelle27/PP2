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
    vector <vector <int> > v(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> v[i][j];
        }
        
    }

    return 0;
}