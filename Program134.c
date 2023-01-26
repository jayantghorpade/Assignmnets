#include <stdio.h>
int coutEvenDigit(int iVal)
{
    int iAns = 0;
    int irem = 0;
    int mult = 1;
    while (iVal != 0)
    {
        irem = iVal % 10;
        if (irem != 0)
        {
            mult = mult * irem;
        }
        iVal = iVal / 10;
    }
    return mult;
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("ENTER NO\n");
    scanf("%d", &iNo1);
    iRet = coutEvenDigit(iNo1);
    printf("count is :%d", iRet);
    return 0;
}