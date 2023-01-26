#include <stdio.h>
void Display(int iVal)
{
    if (iVal < 0)
    {
        iVal = -iVal;
    }
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iVal; iCnt++)
    {
        printf("* ");
    }
    for (iCnt = 1; iCnt <= iVal; iCnt++)
    {
        printf(" # ");
    }
}
int main()
{
    int iNo1 = 0;
    printf("enter No\n");
    scanf("%d", &iNo1);
    Display(iNo1);

    return 0;
}
