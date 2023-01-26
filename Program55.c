#include <stdio.h>
int factorDiff(int iVal)
{
    int iCnt = 0;
    int iFactorSum = 0, iNonFctorSum = 0;
    for (iCnt = 1; iCnt < iVal; iCnt++)
    {
        if (iVal % iCnt == 0)
        {
            iFactorSum = iFactorSum + iCnt;
        }
        else
            iNonFctorSum = iNonFctorSum + iCnt;
    }
    return iFactorSum - iNonFctorSum;
}

int main()
{
    int iNo1 = 0;
    int iret = 0;
    printf("ENTER NO=\n");
    scanf("%d", &iNo1);
    iret = factorDiff(iNo1);
    printf("%d", iret);
    return 0;
}