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
void Prime(PNODE First)
{
    int i = 0;
    while (First != NULL)
    {
        int temp = 0, val = First->data;
        for (i = 2; i <= val / 2; i++)
        {
            if (val % i == 0)
            {
                temp++;
                break;
            }
        }
        if (temp == 0 && val != 1)
        {
            printf("%d\n", val);
        }

        First = First->next;
    }
}
int main()
{
    PNODE Head = NULL;
    InsertFirst(&Head, 27);
    InsertFirst(&Head, 22);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    Prime(Head);
    return 0;
}