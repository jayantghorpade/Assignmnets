#include <stdio.h>
int EvenOddFactorialDiffrenec(int iVal)
{
    int iCnt = 0;
    int iFact1 = 1;
    int iFact2 = 1;
     if (iVal < 0)
    {
         iVal = -iVal;
    }

    for (iCnt = 1; iCnt <= iVal; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
        else
        {
            iFact2 = iFact2 * iCnt;
        }
    }

    return iFact1 - iFact2;
}
int main()
{
    int iNo1 = 0;
    printf("Enter No :\n");
    scanf("%d", &iNo1);
    printf("Fcators are :");
    int iRet = EvenOddFactorialDiffrenec(iNo1);
    printf("DIFFRENEC IS : %d\n", iRet);
    return 0;
}