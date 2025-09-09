#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>
#include <deque>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque <int> v;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        int y;
        cin >> x;
        if(x == 1) {
            cin >> y;
            if(cnt%2 == 0)v.push_back(y);
            else v.push_front(y);
        }   
        else if (x == 2) {
            cnt++;
        }
    }
    if (cnt%2 == 1) reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
    }
    return 0;
}   