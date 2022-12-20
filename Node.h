#ifndef NODE_H
#define NODE_H

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE* next;

} Node;


Node* newNode(int data_);
void destroyNode(Node* target);
void showNode(Node* target);



#endif