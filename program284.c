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
int LargestNode(struct Node *check)
{
    int iMax = 0;
    while (check != NULL)
    {
        if (check->data > iMax)
        {
            iMax = check->data;
        }
        check = check->next;
    }
    return iMax;
}
int main()
{
    int iRet = 0;
    struct Node *Head = NULL;
    InsertFirst(&Head, 70);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 50);
    InsertFirst(&Head, 95);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);
    Display(Head);
    iRet = LargestNode(Head);
    printf("LARGEST ELEMENT OF NODES ARE is %d:\n", iRet);

    return 0;
}