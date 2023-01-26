#include <stdio.h>
int factorSum(int iVal)
{
    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 1; iCnt <=iVal / 2; iCnt++)
    {
        if (iVal % iCnt == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}
int main()
{
    int iNo1 = 0, iRet = 0;
    printf("ENTER NO=\n");
    scanf("%d", &iNo1);
    iRet = factorSum(iNo1);
    printf("%d", iRet);
    return 0;
}