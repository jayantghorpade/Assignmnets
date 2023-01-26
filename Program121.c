#include <stdio.h>
void DigitSeprate(iVal)
{
    int irem = 0;
    if(iVal<0)
    {
        iVal=-iVal;
    }
    while (iVal != 0)
    {
        irem = iVal % 10;
        printf("%d\n", irem);
        iVal = iVal / 10;
    }
}
int main()
{
    int iNo1 = 0;
    printf("enter no");
    scanf("%d", &iNo1);
    DigitSeprate(iNo1);
    return 0;
}
