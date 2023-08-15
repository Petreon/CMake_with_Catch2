#include <iostream>
#include "mathslib.hpp"
#include "statslib.hpp"

int main() {
    mathslib math;
    std::cout << "sum of 10 and 20 = " << math.add2numbers(10,20) << std::endl;
    std::cout << "multiply of 10 and 20 = " << math.multply2numbers(10,20) << std::endl;
    stats statis_obj;

    std::cout << "using stats library that multiply how many times do you want to mutiply a mathlib sum" << std::endl;

    std::cout << "multiplying 2 times the sum of 10 and 20 = " << statis_obj.making_stuff(2,10,20) << std::endl;
    

    return 0;
}