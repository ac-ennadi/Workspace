#include <iostream>

//the namespace

///NOTE : we can use the name space is room
// we can solve the problem of name conflex

namespace room1 {
    void someone (void) {std::cout << "i am here";}
};

namespace room2 {
    void someone (void) {std::cout << "i am here";}
};