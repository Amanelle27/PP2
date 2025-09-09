#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m[x]++;
    }
    map <int, int>::iterator it = m.begin();
    it++;
    cout << it->second <<endl;
    return 0;
}