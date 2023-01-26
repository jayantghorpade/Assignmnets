#include <stdio.h>
int EVENFactorial(int iVal)
{
    int iCnt = 0;
    int iFact = 1;
    if (iVal < 0)
    {
        iVal = -iVal;
    }
    for (iCnt = 1; iCnt <= iVal; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
            printf("%d,", iCnt);
        }
    }

    return iFact;
}
int main()
{
    int iNo1 = 0;
    printf("Enter No :\n");
    scanf("%d", &iNo1);
    printf("factor are:");
    int iRet = EVENFactorial(iNo1);
    printf("\neven factorial is %d", iRet);
    return 0;
}