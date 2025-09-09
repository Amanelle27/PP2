#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <sstream>

using namespace std;


struct product {
    // setting default values 
    string name;
    int price;
    product () { // constructor for struct product
        cin >> name >> price;
    }

    void takeInput() {
        cin >> name >> price;
    }
    void print() {
        cout << name << ' ' << price <<endl;
    }
    // overloading an operator == 
    // this is p1 another is p2
    // this is a pointer to p1
    bool operator == (product another) {
        return this->name == another.name; //compares only by names
    }
    bool operator < (product another) {
        if (this->name != another.name) return this->name < another.name; //compares by names
        else return this->price < another.price;
    }
    };

int main() {
    product p1;
    p1.name = "ford";
    p1.price = 10;
    p1.takeInput();
    p1.print();
    cout << p1.name <<endl;
    cout << p1.price <<endl;
    // p1 == p2 same as p1.equals(p2)
   
    return 0;
}