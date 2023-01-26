#include <stdio.h>
int factorOrderD(int iVal)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt < iVal; iCnt++)
    {
        if (iVal % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iNo1 = 0;
    int iret = 0;
    printf("ENTER NO=\n");
    scanf("%d", &iNo1);
    iret=factorOrderD(iNo1);
    printf("%d", iret);
    return 0;
}