//
// Created by phung vuong on 30/09/2023.
//

#ifndef IOTLEETCODE_REMOVELINKEDLIST_H
#define IOTLEETCODE_REMOVELINKEDLIST_H

struct RemoveListNode {
         int val;
         struct RemoveListNode *next;
     };

struct RemoveListNode* removeElements(struct RemoveListNode* head, int val);
void RunRemoveListNode();

#endif //IOTLEETCODE_REMOVELINKEDLIST_H
