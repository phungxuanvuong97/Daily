//
// Created by phung vuong on 04/09/2023.
//

#include <stdlib.h>
#include "PlusOne.h"
#include "../../common/array/ArrayUtils.h"
#include "../../common/printing/printing.h"

#define COUNT_OF2(x) (sizeof(x) / sizeof(x[0]))

int* plusOne(int* digits, int digitsSize, int* returnSize){
    if(digitsSize == 0){
        return digits;
    }

    int lastDigit = digits[digitsSize  -1 ];

    if(lastDigit + 1  == 10){
        int *newArr = (int*)malloc(sizeof(int) * (digitsSize + 1));
        for(int i=0;i<digitsSize-1;i++){
            newArr[i] = digits[i];
        }
        newArr[digitsSize-1] = lastDigit + 1;
        newArr[digitsSize] = 0;

        return newArr;
    }
    else{
        int *newArr = (int*)malloc(sizeof(int) * (digitsSize));
        for(int i=0;i<digitsSize-1;i++){
            newArr[i] = digits[i];
        }
        newArr[digitsSize-1] = lastDigit + 1;
        return newArr;
    }

}

void RunPlusOne(){
    int digits[] = {1,2,3};
    int len = COUNT_OF(digits);
    int* returnResult;

    int* result = (int*)malloc(sizeof(int) * 4 );

    int lenResult = COUNT_OF2(result);
    printf("%d", lenResult);
}