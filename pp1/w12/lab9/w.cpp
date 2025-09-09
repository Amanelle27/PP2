#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

using namespace std;

bool isPalindrome(string s) {
    string ogs = s;
    reverse (s.begin(), s.end());
    if (s == ogs) return true;
    else return false;
}


int main() {
    string x;
    cin >> x;
    set <string> s;
    sort(x.begin(), x.end());
    do {
        s.insert(x);
    } while(next_permutation(x.begin(), x.end()));
    set <string>::iterator it;
    bool res = false;
    for(it = s.begin(); it != s.end(); it++) {
        if (isPalindrome(*it)) {
            res = true;
            cout << "ZA WARUDO TOKI WO TOMARE" <<endl;
            break;
        }
    }
    if (!res) cout << "JOJO" <<endl;
    return 0;
}