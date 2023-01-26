#include <stdio.h>
int Display(int iVal)
{
    int iCnt = 0;
    if(iVal<0)
    {
        iVal=-iVal;
    }
    for (iCnt = 1; iCnt <= iVal; iCnt++)
    {
        printf(" $ ");
        printf(" * ");

    }
}
int main()
{
    int iNo1 = 0;
    printf("Enter No");
    scanf("%d", &iNo1);
    Display(iNo1);
    return 0;
}