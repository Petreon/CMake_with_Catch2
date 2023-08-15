#include <iostream>
#include "statslib.hpp"

stats::stats() {
    std::cout << "stats constructor called" << std::endl;
}

stats::~stats() {
    std::cout << "stats destructor called" << std::endl;
}

int stats::making_stuff(int times, int num1, int num2) {
    return times * this->add2numbers(num1,num2); // the * is not a pointer to this but only multipling the return of teh function
}