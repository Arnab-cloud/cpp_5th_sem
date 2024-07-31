#include <iostream>
#include "Calc.h"
int main()
{
    Calc new_cal;
    std::cout << new_cal.add(8,2) << std::endl;
    std::cout << new_cal.sub(5,4) << std::endl;
    std::cout << new_cal.fact(3) << std::endl;
    std::cout << new_cal.div(4,0) << std::endl;
    return 0;
}
