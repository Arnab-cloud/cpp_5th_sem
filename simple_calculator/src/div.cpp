#include "Calc.h"
#include <iostream>
int Calc::div(int num1, int num2){
    if(num2 == 0){
        std::cout << "ERROR:Cannot divide with 0\n";
        exit(1);
    }
    return num1/num2;
}
