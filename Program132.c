#include <stdio.h>
int coutOddDigit(int iVal)
{
    int iAns = 0;
    int irem = 0;
    int count = 0;
    while (iVal != 0)
    {
        irem = iVal % 10;
        if (irem % 2 != 0)
        {
            count++;
        }
        iVal = iVal / 10;
    }
    return count;
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("ENTER NO\n");
    scanf("%d", &iNo1);
    iRet = coutOddDigit(iNo1);
    printf("count odd digit in no is :%d", iRet);
    return 0;
}