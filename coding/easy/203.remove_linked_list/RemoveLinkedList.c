//
// Created by phung vuong on 30/09/2023.
//

#include <stdlib.h>
#include <stdio.h>
#include "RemoveLinkedList.h"


struct RemoveListNode* removeElements(struct RemoveListNode* head, int val){
    struct RemoveListNode* tempt = head;

    struct RemoveListNode* newListHead = NULL;
    struct RemoveListNode* newTempt;

    while (tempt){
        if(tempt->val != val){
            struct RemoveListNode* newNode = malloc(sizeof(struct RemoveListNode));
            newNode->val = tempt->val;

            if(newListHead == NULL){
                newListHead = newNode;
                newTempt = newNode;
            }
            else{
                newTempt->next = newNode;
            }

            newTempt = newNode;
            tempt = tempt->next;
        }
        else{
            tempt = tempt->next;
            continue;
        }
    }

    return newListHead;
}


void RunRemoveListNode(){
    struct RemoveListNode* v1 = malloc(sizeof (struct RemoveListNode));

    v1 ->val = 1;

    struct RemoveListNode* v2 = malloc(sizeof (struct RemoveListNode));

    v2 ->val = 2;

    struct RemoveListNode* v3 = malloc(sizeof (struct RemoveListNode));

    v3 ->val = 6;

    struct RemoveListNode* v4 = malloc(sizeof (struct RemoveListNode));

    v4 ->val = 3;

    struct RemoveListNode* v5 = malloc(sizeof (struct RemoveListNode));

    v5 ->val = 4;

    struct RemoveListNode* v6 = malloc(sizeof (struct RemoveListNode));

    v6 ->val = 5;

    struct RemoveListNode* v7 = malloc(sizeof (struct RemoveListNode));
    v7 ->val = 6;

    v1->next = v2;
    v2->next = v3;
    v3->next = v4;
    v4->next = v5;
    v5->next = v6;
    v6->next = v7;
    v7->next = NULL;

    struct RemoveListNode* result = removeElements(v1, 6);

    while (result){
        printf("value: %d \n", result->val);
        result = result->next;
    }
}