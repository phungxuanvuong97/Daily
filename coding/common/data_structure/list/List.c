//
// Created by phung vuong on 06/09/2023.
//

#include "List.h"
List* CreateList(){
    List *list = malloc(sizeof(List));
    list->length = 0;
    return list;
}

void AddToList(List *list, int value){

    int newLength = list->length + 1;
    int *values = realloc(list->values, sizeof(int) * newLength);
    values[newLength - 1] = value;

    if(!list->values){
        int* oldValues = list->values;
        free(oldValues);
    }

    list->values = values;
    list->length = list->length + 1;
}