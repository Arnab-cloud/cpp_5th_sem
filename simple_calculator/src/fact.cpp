#include "Calc.h"
int Calc::fact(int num1){
    int fact = 1;
    while(num1)
        fact *= num1--;
    return fact;
}
