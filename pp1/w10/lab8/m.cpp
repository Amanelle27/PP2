#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    queue <string> q;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) {
            string s;
            cin >> s;
            q.push(s);
        }
        else if (x == 2 && !q.empty()) {
            q.pop();
        }
        if(!q.empty()) cout << q.front() <<endl;
        else cout << "queue is empty" <<endl;

    }
    return 0;
} 