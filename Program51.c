#include <stdio.h>
int factorMul(int iVal)
{
    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 1; iCnt <= iVal / 2; iCnt++)
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
    int iNo1 = 0;
    int iRet = 0;
    printf("ENTER NO=\n");
    scanf("%d", &iNo1);
    iRet = factorMul(iNo1);
    printf("factor of %d multipliction is=%d", iNo1, iRet);

    return 0;
}