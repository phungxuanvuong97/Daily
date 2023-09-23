//
// Created by phung vuong on 23/09/2023.
//

#include <math.h>
#include "BinaryToDecimal.h"

int getDecimalValue(struct BinaryNode* head){

    struct BinaryNode* temptHead = head;
    int index = 0;
     int sum = 0;
    while (temptHead){
        sum += temptHead->val * pow(2, index);
        index++;
        temptHead = temptHead->next;
    }

    return sum;
}