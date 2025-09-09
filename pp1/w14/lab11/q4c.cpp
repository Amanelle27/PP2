#include <iostream>
#include <vector>
#include <set>
#include <stack>

using namespace std;

// problem t

int main() {
    string ss;
    getline(cin, ss);
    int ind;
    for(int i = 0; i < ss.size(); i++) {
        if ((ss[i] >= 'A' && ss[i] <= 'Z') || (ss[i] >= 'a' && ss[i] <= 'z')) {
            ss[i] = toupper(ss[i]);
            ind = i;
            break;
        }
    }
    for(int i = ind+1; i < ss.size(); i++) {
        if ((ss[i] >= 'A' && ss[i] <= 'Z') || (ss[i] >= 'a' && ss[i] <= 'z')) {
            ss[i] = tolower(ss[i]);
        }
    }
    cout << ss <<endl;
    return 0;
}