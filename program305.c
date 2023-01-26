#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void InsertFirst(struct Node **First, int iNo)
{
    struct Node *newn = (struct Node *)malloc(sizeof(struct Node));
    newn->data = iNo;
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
void Display(struct Node *First)
{
    while (First != NULL)
    {
        printf("%d ", First->data);
        First = First->next;
    }
    printf(" NULL\n");
}
int MinDigit(struct Node *check)
{
    while (check != NULL)
    {
        int iMax = 0, irem = 0;
        int flag = check->data;
        while (check->data != 0)
        {
            irem = check->data % 10;
            if (irem > iMax)
            {
                iMax = irem;
            }
            check->data = check->data / 10;
        }
        check = check->next;
        printf("%d ", iMax);
    }
}
int main()
{
    int iRet = 0;
    struct Node *Head = NULL;
    InsertFirst(&Head, 419);
    InsertFirst(&Head, 250);
    InsertFirst(&Head, 532);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);
    Display(Head);
    iRet = MinDigit(Head);

    return 0;
}