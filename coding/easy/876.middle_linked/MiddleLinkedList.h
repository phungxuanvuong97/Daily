//
// Created by phung vuong on 30/09/2023.
//

#ifndef IOTLEETCODE_MIDDLELINKEDLIST_H
#define IOTLEETCODE_MIDDLELINKEDLIST_H


struct MiddleListNode {
         int val;
         struct ListNode *next;
};

struct MiddleListNode* middleNode(struct MiddleListNode* head);
void RunMiddleNode();

#endif //IOTLEETCODE_MIDDLELINKEDLIST_H
