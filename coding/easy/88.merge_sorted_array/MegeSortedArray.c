//
// Created by pxvuong on 9/14/2023.
//

#include <stdio.h>
#include "MegeSortedArray.h"
#include "../../common/data_structure/sc_array/sc_array.h"

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    struct sc_array_int arr;

    sc_array_init(&arr);

    //sc_array_add(&arr, 0);

    int i = 0;
    int j= 0;


    while(i <m || j < n){

        int first = -1;
        int second = -1;

        if(i < m){
            first = 1;
        }

        if(j<n){
            second = 1;
        }

        if(first != -1 && second != -1){
            if(nums1[i] < nums2[j]){
                sc_array_add(&arr, nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]){
                sc_array_add(&arr, nums2[j]);
                j++;
            }
            else{
                sc_array_add(&arr, nums1[i]);
                sc_array_add(&arr, nums2[j]);
                i++;
                j++;
            }

            continue;
        }

        if(first == 1){
            sc_array_add(&arr, nums1[i]);
            i++;
            continue;
        }

        if(second == 1){
            sc_array_add(&arr, nums2[j]);
            j++;
            continue;
        }

    }

    for (size_t i = 0; i < sc_array_size(&arr); i++) {
        printf("Elem = %d \n", arr.elems[i]);
    }

    sc_array_term(&arr);
}


void RunMergeSortedArray(){
    int nums1[] = {1,2,3,0,0,0};
    int m = 3;
    int nums2[] = {2,5,6};
    int n = 3;

    merge(nums1, 6, 3, nums2, 3, 3);
}