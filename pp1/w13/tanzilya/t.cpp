#include <iostream>
#include <set>
#include <sstream>
using namespace std;
bool isuniq (int n){
    stringstream ss;
    ss << n;
    string s;
    ss >> s;
    set <char> ch;
    for (int i=0; i<s.size(); i++){
        ch.insert(s[i]);
    }
    if (s.size()==ch.size()){
        return true;
    }else return false;
}
int main(){
    int l , r;
    cin >> l >> r;

    for ( l; l<r; l++){
        if (isuniq(l)){
            cout<<l;
            return 0;
        }
    }
    cout << "unders" << endl;
}