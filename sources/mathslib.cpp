#include "mathslib.hpp"
#include <iostream>

mathslib::mathslib(){
    std::cout << "mathslib contructor called" << std::endl;
}

mathslib::~mathslib(){
    std::cout << "mathslib destructor called" << std::endl;
}

int mathslib::add2numbers(int num1, int num2) {
    return (num1 + num2);
}

int mathslib::multply2numbers(int num1, int num2) {
    return (num1 * num2);
}