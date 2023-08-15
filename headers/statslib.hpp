#pragma once
#include "mathslib.hpp"
#ifndef STATS_LIB
#define STATS_LIB

class stats : public mathslib {
public:
    stats();
    ~stats();
    int making_stuff(int times, int num1, int num2);
};


#endif