#include "Calc.h"
int Calc::pow(int num1, int num2){
    int pow=1;
    while(num2)
        pow *= num1;
    return pow;
}
