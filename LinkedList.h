#ifndef LinkedList_H
#define LinkedList_H

#include "Node.h"

typedef struct LINKED_LIST
{
    Node* head;
    unsigned int count;

} LinkedList;


LinkedList* newList();
void addToList(LinkedList* L_, int val);
int removeFromEnd(LinkedList* L_);
void showList(LinkedList* L_);
void destroyList(LinkedList* L_);




#endif