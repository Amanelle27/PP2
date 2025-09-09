#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main(){
    string sentence;
    getline (cin, sentence);  
    stringstream ss;
    ss << sentence;
    string s;
    map <string, int> str;
    while (ss >> s) {
        str[s]++;
    }
    map <string, int> ::iterator it;
    for ( it = str.begin(); it!= str.end(); it++){
        cout << it->first << " " << it->second << endl;

    }


}