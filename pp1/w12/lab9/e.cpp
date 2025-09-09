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

using namespace std;

int sum (vector <int> v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    return sum;
}
int findMax(vector <int> v) {
    int maxE = v[0];
    for (int i = 0; i < v.size(); i++) {
        maxE = max(maxE, v[i]); 
    }
    return maxE;
}
bool cmp(vector<int> v1, vector <int> v2) {
    if (sum(v1) != sum(v2)) return sum(v1) < sum(v2);
    else if (v1.size() != v2.size()) return v1.size() < v2.size();
    else if (findMax(v1) != findMax(v2)) return findMax(v1) < findMax(v2);
    else return true;
}




int main() {
    int n;
    cin >> n;
    vector <vector <int> > v;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector <int> row;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << ' ';
        }
        cout <<endl;
    }
    return 0;
}