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
    int indx = 0;
    int maxsum = v[0].first + v[0].second;
    for (int i = 0; i < n; i++){
       int sum = v[i].first + v[i].second;
       if (sum > maxsum) {
        maxsum = sum;
        indx = i+1;
       }
    }
        cout << indx << ' ' << v[indx-1].first << " " <<  v[indx-1].second << endl;
}


