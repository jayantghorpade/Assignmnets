#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;
void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    if (*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}
void evenAdd(PNODE First)
{
    int i = 0, sum = 0;
    while (First != NULL)
    {
        if (First->dat % 2 == 0)
        {
            sum = sum + First->data;
        }
        First = First->next;
    }
    printf("%d", sum);
}
int main()
{

    PNODE Head = NULL;
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    evenAdd(Head);
    return 0;
}