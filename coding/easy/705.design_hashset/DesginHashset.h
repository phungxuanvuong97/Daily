//
// Created by pxvuong on 2/10/2023.
//

#ifndef IOTLEETCODE_DESGINHASHSET_H
#define IOTLEETCODE_DESGINHASHSET_H


typedef struct {

} MyHashSet;

MyHashSet* myHashSetCreate();
void myHashSetAdd(MyHashSet* obj, int key);
void myHashSetRemove(MyHashSet* obj, int key);
int myHashSetContains(MyHashSet* obj, int key);
void myHashSetFree(MyHashSet* obj);

#endif //IOTLEETCODE_DESGINHASHSET_H
