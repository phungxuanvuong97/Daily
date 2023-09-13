//
// Created by phung vuong on 05/09/2023.
//

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ReverseLinkedList.h"

struct ListNode* reverseList(struct ListNode* head){
    if (head == NULL || head->next == NULL) return head;

    struct ListNode* newHead  = reverseList(head->next);

    head->next->next = head;
    head->next = NULL;

    return newHead ;
}

void RunReverseList(){
    struct ListNode *first = malloc(sizeof(struct ListNode));
    first->val = 1;

    struct ListNode *second = malloc(sizeof(struct ListNode));
    second->val = 2;

    struct ListNode *thirth = malloc(sizeof(struct ListNode));
    thirth->val = 3;

    first->next = second;
    second->next = thirth;
    thirth->next = NULL;

    struct ListNode *reverse = reverseList(first);

    struct ListNode *runner = reverse;

    while(runner != NULL){
        printf("%d \n", runner->val);
        runner = runner->next;
    }
}