// This is a code for creating and implementing all the functions of a linked list
/* Group menbers
1. Devendra Palod 20CS10024
2. Deepiha S 20CS30015
*/
#include <stdio.h>
#include <stdlib.h>
#define llist_h

typedef struct NODE
{
    int value;
    struct NODE *next;
}NODE;

typedef NODE* LLIST;

LLIST createList();
int searchList(LLIST H, int k);
LLIST insertAtFront(LLIST H, int k);
LLIST insertAtEnd(LLIST H, int k);
LLIST deleteFromFront(LLIST H, int *k);
LLIST deleteFromEnd(LLIST H, int *k);
LLIST deleteList (LLIST H, int k);


LLIST createList()
{
    LLIST H;
    H = (LLIST)malloc(sizeof(NODE));
    H->value=0;
    H->next = NULL;
    return H;
}


int searchList(LLIST H, int k)
{
    LLIST h = H;
    while(h != NULL)
    {
        if(h->value==k)
            return 1;
        h = h->next;
    }
    return 0;
}

LLIST insertAtFront(LLIST H, int k)
{
    LLIST h = createList();
    h->value = k;
    h->next = H;
    return h;
}

LLIST insertAtEnd(LLIST H, int k)
{
    LLIST h1 = createList();
    h1->value = k;
    LLIST h = H;
    while(h->next != NULL)
    {
        h = h->next;
    }
    h->next = h1;
    return H;
}

LLIST deleteFromFront(LLIST H, int *k)
{
    LLIST h = createList();
    *k = H->value;
    h = H;
    H = H->next;
    free(h);
    return H;
}

LLIST deleteFromEnd(LLIST H, int *k)
{
    LLIST h1 = H;
    LLIST h = H->next;
    while(h->next != NULL)
    {
        h = h->next;
        h1 = h1->next;
    }
    *k = h->value;
    h1->next = NULL;
    free(h);
    return H;
}

LLIST deleteList(LLIST H, int k)
{
    if(H->value == k)
    {
        int *p;
        deleteFromFront(H, p);
        return H;
    }
    LLIST h = H;
    while(h != NULL)
    {
        if(h->next->value==k)
        {
            LLIST d = h->next;
            h->next = h->next->next;
            free(d);
            return H;
        }
        h = h->next;
    }
    return H;
}