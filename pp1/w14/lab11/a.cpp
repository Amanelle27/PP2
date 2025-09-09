#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long nthdegree(int n) {
    if (n == 0) return 1;
    else if (n == 1) return 2;
    else {
        return 2*nthdegree(n-1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << nthdegree(n) <<endl;
    return 0;
}