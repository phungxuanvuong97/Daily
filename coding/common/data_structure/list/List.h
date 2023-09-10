//
// Created by phung vuong on 06/09/2023.
//

#ifndef IOTLEETCODE_LIST_H
#define IOTLEETCODE_LIST_H

#include <stdlib.h>

struct ListNodeItem{
    int* values;
    int length;
};

typedef struct ListNodeItem List;

List* CreateList();
void AddToList(List *list, int value);

#endif //IOTLEETCODE_LIST_H
