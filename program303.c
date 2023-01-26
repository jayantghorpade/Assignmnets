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
int NOOFDIGITPRODUCT(struct Node *check)
{
    while (check != NULL)
    {
        int iMult = 1, irem = 0;
        int flag = check->data;
        while (check->data != 0)
        {
            irem = check->data % 10;
            if (irem == 0)
            {
                irem = 1;
            }
            iMult = iMult * irem;
            check->data = check->data / 10;
        }
        check = check->next;
        printf("%d ", iMult);
    }
}
int main()
{
    int iRet = 0;
    struct Node *Head = NULL;
    InsertFirst(&Head, 70);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 55);
    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);
    Display(Head);
    iRet = NOOFDIGITPRODUCT(Head);

    return 0;
}