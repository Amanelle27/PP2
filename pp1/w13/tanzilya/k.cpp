#include <iostream>
#include <set>
#include <sstream>
using namespace std;
int amount (string s){
    stringstream ss;
    ss << s;
    string word;
    int count=0;
    while (ss>>word){
        count++;
    }
    return count;
}
int main(){
    string sentence;
    getline (cin, sentence);    
    cout << amount(sentence);
}