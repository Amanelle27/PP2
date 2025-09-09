#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> m;
    vector <string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
        if (m[s] == 2) {
            v.push_back(s);
        }
    }
    if (!v.empty()) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] <<endl;
        }
    }
    else cout << "Understandable, have a great day" <<endl;
    return 0;
}