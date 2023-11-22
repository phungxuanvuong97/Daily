//
// Created by pxvuong on 22/11/2023.
//

#include <stdio.h>
#include "HappyNumber.h"

int nextNumber(int n){
    int newNumber = 0;
    while (n != 0){
        int num = n % 10;
        newNumber += num * num;
        n = n/10;
    }
    return newNumber;
}

int isHappy(int n) {
    int slowPointer = n;
    int fastPointer = nextNumber(n);

    while (fastPointer != 1 && fastPointer != slowPointer) {
        slowPointer = nextNumber(slowPointer);
        fastPointer = nextNumber(nextNumber(fastPointer));
    }
    if(fastPointer == 1){
        return 1;
    }
    return -1;
}

void RunHappyNumber(){
    int n = 100;
    int result = isHappy(n);
    printf("value: %d \n", result);
}