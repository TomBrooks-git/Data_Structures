#include "Node.h"

Node* newNode(int data_)
{
    Node* retNode = (Node*)malloc(sizeof(Node));
    retNode->data = data_;
    retNode->next = NULL;
    return retNode;
}

void destroyNode(Node* target)
{
    free(target);
}

void showNode(Node* node)
{
    printf("______________\n");
    printf("Node ID: %d\n", node->data);
    printf("______________\n\n");

}

