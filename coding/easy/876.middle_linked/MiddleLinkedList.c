//
// Created by phung vuong on 30/09/2023.
//

#include <stdlib.h>
#include <printf.h>
#include "MiddleLinkedList.h"

struct MiddleListNode* middleNode(struct MiddleListNode* head){
    struct MiddleListNode* temptHead;
    int count = 0;

    temptHead = head;

    while (temptHead){
        count++;
        temptHead  = temptHead->next;
    }

    temptHead = head;

    int index = 0;
    while (index < count / 2){
        temptHead = temptHead->next;
        index++;
    }

    return temptHead;

}
void RunMiddleNode(){
    struct MiddleListNode* v1 = malloc(sizeof (struct MiddleListNode));

    v1 ->val = 1;

    struct MiddleListNode* v2 = malloc(sizeof (struct MiddleListNode));

    v2 ->val = 2;

    struct MiddleListNode* v3 = malloc(sizeof (struct MiddleListNode));

    v3 ->val = 3;

    struct MiddleListNode* v4 = malloc(sizeof (struct MiddleListNode));

    v4 ->val = 4;

    struct MiddleListNode* v5 = malloc(sizeof (struct MiddleListNode));

    v5 ->val = 5;

    struct MiddleListNode* v6 = malloc(sizeof (struct MiddleListNode));

    v6 ->val = 6;

    v1->next = v2;
    v2->next = v3;
    v3->next = v4;
    v4->next = v5;
    v5->next = v6;
    v6->next = NULL;

    struct MiddleListNode* result = middleNode(v1);


    printf("%d", result->val);


}