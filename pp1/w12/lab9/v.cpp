#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
#include <cmath>
#include <sstream>

using namespace std;


int main() {
    string x;
    cin >> x;
    set <string> s;
    cout << "The anagram variants for string " << x <<" are:" <<endl;
    sort(x.begin(), x.end());
    do {
        s.insert(x);
    } while(next_permutation(x.begin(), x.end()));
    do {
        s.insert(x);
    } while(prev_permutation(x.begin(), x.end()));
    set <string>::iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it <<endl;
    }
    return 0;
}