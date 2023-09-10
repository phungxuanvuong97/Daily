//
// Created by phung vuong on 06/09/2023.
//

#ifndef IOTLEETCODE_BINARYTREEINORDERTRAVERSAL_H
#define IOTLEETCODE_BINARYTREEINORDERTRAVERSAL_H

#include <stdlib.h>

struct TreeNode {
         int val;
         struct TreeNode *left;
         struct TreeNode *right;
};


typedef struct TreeNode Node;

int* inorderTraversal(struct TreeNode* root, int* returnSize);
void RunInorderTraversal();

#endif //IOTLEETCODE_BINARYTREEINORDERTRAVERSAL_H
