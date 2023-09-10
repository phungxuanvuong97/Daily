//
// Created by phung vuong on 03/09/2023.
//

#include "TwoSum.h"

#include <stdlib.h>
#include "../../common/array/ArrayUtils.h"

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int result = -1;
    for(int i=0;i<numsSize-1;i++)
    {
        int j = i+1;

        int a = nums[i];
        int b = nums[j];

        while(j < numsSize ){
            if(nums[i] <= target && nums[j] <= target)
            {
                if((a + b) == target)
                {
                    returnSize[0] = i;
                    returnSize[1] = j;
                    result = 1;
                    break;
                }
            }
            j++;
        }

        if(result == 1){
            break;
        }
    }
    return returnSize;
}

void  RunTwoSum()
{

    int nums[] = {3,2,4};
    int target = 6;
    int numsSize = COUNT_OF(nums);

    int returnSize[2];

    twoSum(nums, numsSize, target, returnSize);

    PRINT_INT_ARRAY(returnSize, 2);

}






