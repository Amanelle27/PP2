#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>

using namespace std;

string upper(string s) {
    int ind;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            s[i] = toupper(s[i]);
            ind = i;
            break;
        }

    }
    for (int i = ind+1; i < s.size(); i++) {
        s[i] = tolower(s[i]);

    }
    return s;
}

int main() {
    string s;
    getline (cin, s);
    cout << upper(s) <<endl;
    return 0;
} 