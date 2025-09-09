#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <pair <int, int> > v;
    
    for (int i = 0; i < n; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        pair <int, int> p = make_pair(n1, n2);
        v.push_back(p);
    }
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++){
        sum1 += v[i].first;
        sum2 += v[i].second;
    }
        cout << sum1 << " " << sum2 << endl;
}


