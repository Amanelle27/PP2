#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <sstream>
// & - an address symbol
// pointer thing for storing an address
// when we write int &a as an input to the function it means we take a copy of reference 
// vector <int> *v; we can also write &v 
// if we pass by pointer (*v) ve have to dereference everywhere
// if we pass by & we don't have to to dereference anywhere
// -> arrow combines a dereference (*) and a dot operator
// a -> b == (*a).b
// v->at(i) == (*v)[i]


int main() {
    int a = 5;
    // declaration of a pointer
    int *b;
    b = &a; // now b stores the address of a
    return 0;
}