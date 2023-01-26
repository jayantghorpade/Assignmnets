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
void PerfectNo(PNODE First)
{
    int i = 0;
    while (First != NULL)
    {
        int val = First->data;
        int sum = 0;
        for (i = 1; i <= val / 2; i++)
        {
            if (val % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == val)
        {
            printf("perfect no is : %d\n", sum);
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    InsertFirst(&Head, 251);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 11);
    InsertFirst(&Head, 6);
    InsertFirst(&Head, 12);

    PerfectNo(Head);
    return 0;
}