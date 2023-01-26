#include <stdio.h>
int factorRev(int iVal)
{
    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 1; iCnt < iVal; iCnt++)
    {
        if (iVal % iCnt != 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter No=\n");
    scanf("%d", &iNo);
    iRet = factorRev(iNo);
    printf("%d", iRet);
    return 0;
}