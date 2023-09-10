//
// Created by phung vuong on 05/09/2023.
//

#include <math.h>
#include "Sqrt.h"

int mySqrt(int x){
    double result = sqrt(x);
    int celied = (int)(result);
    return celied;
}

void RunSqrt(){
    int x = 8;
    int result = mySqrt(x);
}