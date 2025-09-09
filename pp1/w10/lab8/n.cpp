#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>

using namespace std;


bool isXinVector(int x, vector <int> v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (isXinVector(v[i]^v[j], v)) cnt++;
        }
    }
    cout << cnt <<endl;
    return 0;
} 