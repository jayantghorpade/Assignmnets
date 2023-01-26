#include <stdio.h>
int ThreeNoProduct(int iVal1, int iVal2, int iVal3)
{
    int iMul = 0;
    if (iVal1 == 0 && iVal2 == 0 && iVal3 == 0)
    {
    }
    else
    {
        if (iVal1 == 0)
        {
            iVal1 = 1;
        }
        if (iVal2 == 0)
        {
            iVal2 = 1;
        }
        if (iVal3 == 0)
        {
            iVal3 = 1;
        }
    }
    iMul = iVal1 * iVal2 * iVal3;
    return iMul;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;
    int iRet = 0;
    printf("enter Three nos :\n");
    scanf("%d%d%d", &iNo1, &iNo2, &iNo3);
    iRet = ThreeNoProduct(iNo1, iNo2, iNo3);
    printf("multiplication is :%d", iRet);
    return 0;
}