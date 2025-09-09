#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int searchingMax(vector <long long> v, long long n) {
    long long maxV = v[0];
    for (int i = 0; i < n; i++) {
        maxV = max(maxV, v[i]); 
    }
    return maxV;
}

int main() {
    long long n;
    cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long maxind1, maxind2;
    long long maxsum = 0;
    for (int i = 0; i < n-1; i++) {
        long long sum = v[i]+v[i+1];
        if (sum > maxsum) {
            maxsum = sum;
            maxind1 = i;
            maxind2 = i+1;
        }
    }
    long long maxarea = min(v[maxind1], v[maxind2])*2;
    cout << maxarea <<endl;
    return 0;
} 