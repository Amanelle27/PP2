#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <sstream>

using namespace std;


struct product {
    string name;
    int price;
};

int main() {
    product p1;
    p1.name = "ford";
    p1.price = 10;
    cout << p1.name <<endl;
    cout << p1.price <<endl;
   
    return 0;
}