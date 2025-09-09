#include <iostream>
#include <algorithm>
#include <vector>
//libraries for random
#include <cstdlib> // for srand() and rand()
#include <ctime>   // for time()
// time(0); returns how many seconds have passed since 1st january of 1970
// rand(); will return tha same number because of the same default seed
// srand(k); setting seed
// srand(time()); sets always different seeds so numbers are never the same
// to achieve random number in some range like [0; 10000] rand() % 10000;
// to achieve random number [1000; 10000) 
// while(!(range)) getting random again and again

using namespace std;

int k = 0;

int sequenceGen() {  
    return ++k;   
}               

int main() {
    
    int n;
    cin >> n;
    vector <int> v(n);
    generate(v.begin(), v.end(), sequenceGen);   // it has to have size
    for (int i = 0; i < n; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}