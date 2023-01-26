#include <stdio.h>
int CheckEvenOdd(int iVal)
{
    if (iVal % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("check weather no is even  or odd...?");
    scanf("%d", &iNo1);
    iRet = CheckEvenOdd(iNo1);
    if (iRet)
    {
        printf("No is Even");
    }
    else
    {
        printf("No is Odd");
    }
    return 0;
}