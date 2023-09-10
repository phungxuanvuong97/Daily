//
// Created by phung vuong on 09/09/2023.
//

#ifndef IOTLEETCODE_BUBBLESORT_H
#define IOTLEETCODE_BUBBLESORT_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort(void * arr, size_t data_size, size_t elem_size, int(*compare)(void * x, void * y));
int compare_int(void * x, void * y);
int compare_char(void * x, void * y);


#endif //IOTLEETCODE_BUBBLESORT_H
