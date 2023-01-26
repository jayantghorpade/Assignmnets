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
void DigitSum(PNODE First)
{
    while (First != NULL)
    {
        int irem = 0, sum = 0, val = First->data;
        while (First->data != 0)
        {
            irem = First->data % 10;
            sum = sum + irem;
            First->data = First->data / 10;
        }
        printf("sum of %d is:%d\n", val, sum);
        First = First->next;
    }
}
int main()
{
    PNODE Head = NULL;
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);
    InsertFirst(&Head, 146);

    DigitSum(Head);

    return 0;
}