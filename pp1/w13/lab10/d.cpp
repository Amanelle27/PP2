#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

struct academicMean {
    int cnt;
    int total;
    void newScore() {
        int x;
        cin >> x;
        total += x;
        cnt++;
    }
    float getMean() {
        return total/cnt;
    }

};

int main() {
    int n;
    cin >> n;
    map <string, pair <double, double> > m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        double x;
        cin >> x;
        m[s].first += x;
        m[s].second++;
    }
    map <string, pair <double, double> >::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it -> first << ' ';
        double res = (it->second).first/(it->second).second;
        printf("%.6f\n", res);
    }
    return 0;
}  