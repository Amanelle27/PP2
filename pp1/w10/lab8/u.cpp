#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>
#include <deque>

using namespace std;

int getMax(vector <int> v) {
    int maxVal = v[0];
    for (int i = 0; i < v.size(); i++) {
        maxVal = max(v[i], maxVal);
    } 
    return maxVal;
}


int main() {
    int n;
    cin >> n;
    vector <int> v;
    int x;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "add") {
            cin >> x;
            v.push_back(x);
        }
        else if (s == "delete" && !v.empty()) {
            v.erase(v.end()-1);
        }
        else if (s == "getcur") {
            if (v.empty()) cout << "error" <<endl;
            else {
                cout << v.back() <<endl;
            }
        }
        else if(s == "getmax") {
            if (v.empty()) cout << "error" <<endl;
            else cout << *max_element(v.begin(), v.end()) <<endl;
        }
    }
    return 0;
}   