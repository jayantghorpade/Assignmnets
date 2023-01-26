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
int Palindrome(struct Node *check)
{
    while (check != NULL)
    {
        int irem = 0, rev = 0;
        int flag = check->data;
        while (check->data != 0)
        {
            irem = check->data % 10;
            rev = (rev * 10) + irem;
            check->data = check->data / 10;
        }
        if (rev == flag)
        {
            printf("Yes %d is palindrome\n", rev);
        }
        check = check->next;
    }
}
int main()
{
    int iRet = 0;
    struct Node *Head = NULL;
    InsertFirst(&Head, 70);
    InsertFirst(&Head, 30);
    InsertFirst(&Head, 55);
    InsertFirst(&Head, 40);
    InsertFirst(&Head, 33);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 10);
    Display(Head);
    iRet = Palindrome(Head);
    // printf("First occurenec of 30 is %d:\n", iRet);

    return 0;
}