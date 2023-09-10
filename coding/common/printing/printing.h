//
// Created by phung vuong on 03/09/2023.
//

#ifndef IOTLEETCODE_PRINTING_H
#define IOTLEETCODE_PRINTING_H

#include <stdio.h>

#define PRINT_INT_VARIABLE_INFO(variable) \
    printf("Tên biến: %s\n", #variable); \
    printf("Giá trị biến: %d\n", variable);

#define PRINT_STRING_VARIABLE_INFO(variable) \
    printf("Tên biến: %s\n", #variable); \
    printf("Giá trị biến: %s\n", variable);


#endif //IOTLEETCODE_PRINTING_H
