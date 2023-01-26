#include <stdio.h>
int factorOrderD(int iVal)
{
    int iCnt = 0;
    for (iCnt = iVal / 2; iCnt >= 1; iCnt--)
    {
        if (iVal % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("ENTER NO=\n");
    scanf("%d", &iNo1);
    factorOrderD(iNo1);

    return 0;
}