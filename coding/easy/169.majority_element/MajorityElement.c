//
// Created by phung vuong on 12/09/2023.
//

#include "MajorityElement.h"
#include "../../common/data_structure/map/sc_map.h"

int majorityElement(int* nums, int numsSize){
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

    int maxKey = nums[0];
    int maxAppered = 1;

    sc_map_foreach (&map, key, value) {
        if(value > maxAppered){
            maxAppered = value;
            maxKey = key;
        }
    }

    return maxKey;

}

void RunMajorityElement(){
    int nums[] = {2,2,1,1,1,2,2};
    int nums2[]  ={3,2,3};
    int result = majorityElement(nums, 7);
    int result2 = majorityElement(nums2, 3);
}