#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;


int main() {
    // FIFO First in - first out
    queue <int> s;
    for (int i = 1; i <= 5; i++) s.push(i); //adding i to the stack

    while (!s.empty()) {
        cout << s.front() <<endl; //printing highest element
        s.pop(); //erasing it
    }
    // also supports back() - the last one that was added
    return 0;
}