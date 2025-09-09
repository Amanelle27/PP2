#include <iostream>
#include <sstream>
#include <stack>
#include <algorithm>
#include <map>
#include <vector>
#include <deque>

using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    for (int i = 2; i < n-1; i++) {
        if (n%i == 0) return false;
    }
    return true;
}


int main() {
    vector <int> pr(10000);
    vector <int> ind(10000);
    int last = 2;
    for (int i = 0; i < pr.size(); i++) {
        while (!isPrime(last)) {
            last++;
        } 
        if (isPrime(last)) {
            pr[i] = last;
            last++;
        }
        ind[i] = i+1;
    }
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < pr.size(); i++) {
        if (isPrime(ind[i])) cnt++;
        if (cnt == n) {
            cout << pr[i] <<endl;
            break;
        }
    }
    
    return 0;
}   