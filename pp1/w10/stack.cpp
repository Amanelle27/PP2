#include <iostream>
#include <vector>
#include <set>
#include <stack>

using namespace std;


int main() {
    //LIFO Last in - first out
    stack <int> s;
    for (int i = 1; i <= 5; i++) s.push(i); //adding i to the stack

    while (!s.empty()) {
        cout << s.top() <<endl; //printing highest element
        s.pop(); //erasing it
    }
    return 0;
}