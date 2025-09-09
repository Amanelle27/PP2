#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <sstream>

using namespace std;


struct product {
    // setting default values 
    string name = "none";
    int price = 0;
};

int main() {
    product p1;
    p1.name = "ford";
    p1.price = 10;
    cout << p1.name <<endl;
    cout << p1.price <<endl;
   
    return 0;
}