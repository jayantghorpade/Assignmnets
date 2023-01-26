#include <stdio.h>
int Factorial(int no)
{
    static int iCnt = 1;
    static int Mul = 1;
    if (iCnt <= no)
    {
        Mul = Mul * iCnt;
        iCnt++;
        Factorial(no);
    }
    return Mul;
}
int main()
{
    int iret = 0;
    int val = 0;
    printf("enter no -:\n");
    scanf("%d", &val);
    iret = Factorial(val);
    printf("factorial of %d is -:%d", val, iret);
    return 0;
}