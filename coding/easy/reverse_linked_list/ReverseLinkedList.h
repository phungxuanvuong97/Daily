//
// Created by phung vuong on 05/09/2023.
//

#ifndef IOTLEETCODE_REVERSELINKEDLIST_H
#define IOTLEETCODE_REVERSELINKEDLIST_H

struct ListNode {
         int val;
         struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head);
void RunReverseList();

#endif //IOTLEETCODE_REVERSELINKEDLIST_H
