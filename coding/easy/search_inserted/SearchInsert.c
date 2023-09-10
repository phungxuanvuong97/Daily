//
// Created by phung vuong on 04/09/2023.
//

#include "SearchInsert.h"
#include "../../common/array/ArrayUtils.h"
#include "../../common/printing/printing.h"

int searchInsert(int* nums, int numsSize, int target){

    if(numsSize == 0){
        return 0;
    }



    for(int i=0;i<numsSize;i++){

        if(nums[i] > target){
            return i;
        }

        if(nums[i] == target){
            return i;
        }

        if((i+1) == numsSize){
            return i+1;
        }

        if(nums[i] > target){
            return i;
        }

    }



}

void RunSearchInsert(){
    int arr[] = {1,};
    int count = COUNT_OF(arr);
    int target = 0;

    int result = searchInsert(arr, count, target);

    PRINT_INT_VARIABLE_INFO(result);
}