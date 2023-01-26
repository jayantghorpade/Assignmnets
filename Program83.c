#include <stdio.h>
int factorial(int iVal)
{
    int iCnt = 0;
    int iFact = 1;
    if (iVal < 0)
    {
        iVal = -iVal;
    }
    for (iCnt = iVal; iCnt > 0; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iNo1 = 0;
    int iAns = 0;
    printf("ENTER NO FOR FATORIAL :\n");
    scanf("%d", &iNo1);
    iAns = factorial(iNo1);
    printf("FACTORIALIS %d", iAns);
    return 0;
}