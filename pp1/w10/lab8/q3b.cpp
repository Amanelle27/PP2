#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;




int main() {
    string s;
    stringstream ss;
    cin >> s;
    ss << s;
    char x;
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        ss >> x;
        sum += x-'0';
    }
    cout << sum <<endl;

    return 0;
} 