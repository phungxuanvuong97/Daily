//
// Created by phung vuong on 03/09/2023.
//

#ifndef IOTLEETCODE_ARRAYUTILS_H
#define IOTLEETCODE_ARRAYUTILS_H
#include<stdio.h>

#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x])))))

#define PRINT_INT_ARRAY(array, length) \
for(int i = 0; i < length; i++) \
    printf("%d\t", array[i]);

#endif //IOTLEETCODE_ARRAYUTILS_H
