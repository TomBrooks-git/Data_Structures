#include "LinkedList.h"

LinkedList* newList()
{
    LinkedList* retList = (LinkedList*)malloc(sizeof(LinkedList));
    retList->head = NULL;
    retList->count = 0;
    return retList;
}

void addToList(LinkedList* L_, int val)
{
    if(L_->head == NULL)
    {
        L_->head = newNode(val);
        L_->count++;
        return;
    }
    
    Node* node = newNode(val);

    Node* currNode = L_->head;

    while(currNode->next != NULL)
    {
        currNode = currNode->next;
    }
    L_->count++;
    currNode->next = node;
}

int removeFromEnd(LinkedList* L_)
{
    Node* currNode = L_->head;
    Node* prevNode = currNode;

    if(L_->count == 0)
    {
        printf("List is empty\n");
        return -1;
    }

    if(L_->count == 1)
    {
        int temp = L_->head->data;
        free(L_->head);
        L_->head == NULL;
        L_->count--;
        return temp;
    }

    while(currNode->next != NULL)
    {
        prevNode = currNode;
        currNode = currNode->next;
    }

    int temp = currNode->data; 
    free(currNode);
    prevNode->next = NULL;
    L_->count--;
    return temp;

}



void showList(LinkedList* L_)
{
    if(L_->head == NULL)
    {
        printf("Requested list is empty!\n");
        return;
    }
    
    Node* currNode = L_->head;

    

    printf("Total number of list elements is: %d\n", L_->count);
    int i = 0;

    while(currNode != NULL && i < L_->count)
    {
        printf("------------\n");
        printf("Node: %d\n", currNode->data);
        printf("------------\n\n");
        currNode = currNode->next;
        i++;
    }

}

void destroyList(LinkedList* L_)
{
    if(L_->head == NULL)
    {
        printf("\n");
        return;
    }

    int i;
    for(i = 0; i < L_->count; i++)
    {
        removeFromEnd(L_);
    }
    
    free(L_);

    printf("List Succesfully Destroyed\n");


}




