//
// Created by phung vuong on 04/09/2023.
//

#include <stdlib.h>
#include "RemoveDuplicateElement.h"
#include "../../common/array/ArrayUtils.h"
#include "../../common/printing/printing.h"
#include "../../common/data_structure/map/sc_map.h"

int removeDuplicates(int* nums, int numsSize){

    struct sc_map_int map;

    sc_map_init_ints(&map, 0, 0);

    // init map
    for(int i=0;i<numsSize;i++){
        sc_map_put_int(&map,nums[i], 0);
    }

    int count = 0;

    for(int i=0;i<numsSize;i++){
        int key = nums[i];
        int currentValue = sc_map_get_int(&map, key);
        currentValue++;
        sc_map_del_int(&map, key);
        sc_map_put_int(&map, key, currentValue);
    }

    int index = 0;

    int key;
    int value;

    sc_map_foreach (&map, key, value) {
            count ++;
            printf("Key:[%d], Value:[%s] \n", key, value);
        }

    return count;
}


void RunRemoveDuplicates(){

// [0,0,1,1,1,2,2,3,3,4]
// [0,1,0,1,1,2,2,3,3,4]
// [0,1,0]

        int nums[] = {-1,0,0,0,0,3,3};
        int count = COUNT_OF(nums);

        int k = removeDuplicates(nums, count);

        PRINT_INT_VARIABLE_INFO(k);
        PRINT_INT_ARRAY(nums, count);

}