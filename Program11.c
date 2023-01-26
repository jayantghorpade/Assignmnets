#include <stdio.h>
int Divide(int iNo1, int iNo2)
{
    int iAns = 0;
    if (iNo1 < 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}
int main()
{
    int iValue1 = 15;
    int iValue2 = 5;
    int iret = 0;
    iret = Divide(iValue1, iValue2);
    printf("Divsison is=%d", iret);
    return 0;
}
