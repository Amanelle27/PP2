#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>
#include <deque>

using namespace std;

string decimalToBinary(long long n) {
    string res;
    while (n != 0) {
        res += char(n%2 + '0');
        n /= 2;
    }
    reverse (res.begin(), res.end());
    return res;

}

int main() {
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        string s = decimalToBinary(x);
        stack <char> stk;
        for (long long j = 0; j < s.size(); j++) {
            if (stk.empty()) stk.push(s[j]);
            else if (s[j] == '1') stk.push(s[j]);
            else if (s[j] == '0' && stk.top() == '1') stk.pop();
        }
        if (stk.empty()) cout << "YES" <<endl;
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}   