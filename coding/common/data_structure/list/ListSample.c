//
// Created by phung vuong on 06/09/2023.
//

#include <stdlib.h>
#include <printf.h>
#include "ListSample.h"
#include "List.h"

void RunListSample(){

    List* list = CreateList();
    AddToList(list, 1);
    AddToList(list, 2);
    AddToList(list, 3);

    for(int i=0;i<list->length;i++){
        printf("%d", list->values[i]);
    }

}