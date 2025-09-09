#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin >> n;
    set <int> r;
    int t;

    for (int i=0; i<n; i++){
        cin>>t;
        r.insert(t);
    }
    cout << r.size() << endl;
}