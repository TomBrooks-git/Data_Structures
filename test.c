#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"


int main()
{
    LinkedList* List = newList();
    addToList(List, 1);
    addToList(List, 2);
    addToList(List, 3);
    removeFromEnd(List);
    removeFromEnd(List);
    removeFromEnd(List);
    removeFromEnd(List);
    
    
    showList(List);

    //printf("Getting Here 1\n");

    //destroyList(List);

    printf("Test concluded succesfully, go to sleep\n");

    return 0;   
}