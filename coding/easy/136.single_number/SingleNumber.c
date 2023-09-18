//
// Created by phung vuong on 11/09/2023.
//

#include "SingleNumber.h"
#include "../../common/algorithms/pubble_sort/BubbleSort.h"
#include "../../common/data_structure/sc_map/sc_map.h"

int singleNumber(int* nums, int numsSize){

    int key, value;
    struct sc_map_int map;

    sc_map_init_int(&map, 0, 0);

    for (int i = 0; i < numsSize; ++i) {
        sc_map_put_int(&map, nums[i], 0);
    }

    for (int i = 0; i < numsSize; ++i) {
        int currentValue = sc_map_get_int(&map, nums[i]);
        sc_map_put_int(&map, nums[i], currentValue + 1);
    }

    sc_map_foreach (&map, key, value) {
            if(value == 1){
                return key;
            }
    }

    return -1;
}

void RunSingleNumber(){

    int nums1[] = {2,2,1};
    int nums2[] = {4,1,2,1,2};

    int result1 = singleNumber(nums1, 3);
    int result2 = singleNumber(nums2, 5);


}