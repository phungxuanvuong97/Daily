//
// Created by pxvuong on 9/20/2023.
//

#include <malloc.h>
#include <stdio.h>
#include "RemoveDuplicateLinkedlist.h"

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode* tempHead = head;
    while(tempHead && tempHead->next && tempHead->next->next != NULL){
        if(tempHead->val == tempHead->next->val){
            tempHead = tempHead->next;
        }
    }
    return tempHead;
}

void RunDeleteDuplicate(){

    struct ListNode* head = malloc(sizeof(struct ListNode));
    head->val = 1;


    struct ListNode* one = malloc(sizeof(struct ListNode));
    one->val = 1;

    head->next = one;

    struct ListNode* two = malloc(sizeof(struct ListNode));
    two->val = 2;

    one->next = two;
    two->next = NULL;


    struct ListNode* newHead = deleteDuplicates(head);


    while(newHead != NULL){
        printf("value: %d \n", newHead->val);
        newHead = newHead->next;
    }

}