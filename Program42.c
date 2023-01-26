#include <stdio.h>
void factorRev(int iVal)
{
    int iCnt = 0;
    for (iCnt = iVal / 2; iCnt >= 1; iCnt--)
    {
        if (iVal % iCnt == 0)
        {
            printf("%d-", iCnt);
        }
    }
}

int main()
{
    int iNo = 0;
    printf("Enter No=\n");
    scanf("%d", &iNo);
    factorRev(iNo);
    return 0;
}