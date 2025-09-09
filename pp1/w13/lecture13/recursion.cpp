#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <sstream>

using namespace std;
// key recursion elements
// base case
// problem reduction
long long factorial (int n) {
    //base case
    if (n == 1 || n == 0) return 1;
    //recursive call with problem reduction
    return n * factorial(n-1);
}

int main() {
    cout << factorial(4) <<endl;
    return 0;
}