//
// Created by phung vuong on 09/09/2023.
//

#include "BubbleSort.h"


void sort(void * arr, size_t data_size, size_t elem_size, int(*compare)(void * x, void * y)){
    size_t length = data_size/elem_size;
    for(int i = 0; i<length; i++){
        for(int j = 0; j<length-1; j++){
            if(compare(arr + elem_size*j, arr + elem_size * (j+1)) > 0){
                char temp[elem_size];
                memcpy(temp,arr + elem_size*j,elem_size);
                memcpy(arr + elem_size*j,arr + elem_size * (j+1), elem_size);
                memcpy(arr + elem_size * (j+1),temp, elem_size);
            };
        }

    }
}

#define GENERATE_COMPARETOR(type) \
    type

int compare_int(void * x, void * y){
    int * value1 = (int*)x;
    int * value2 = (int*)y;
    return *value1 > *value2 ? 1 : -1;
}

int compare_char(void * x, void * y){
    char * p1 = (char*)x;
    char * p2 = (char*)y;
    return *p1 > *p2 ? 1 : -1;
}