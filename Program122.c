#include <stdio.h>
void noContainZero(iVal)
{
    int irem = 0;
    int zero = 0;
    while (iVal != 0)
    {
        irem = iVal % 10;
        if (irem == 0)
        {
            zero = 1;
        }
        iVal = iVal / 10;
    }
    if (zero)
    {
        printf("YES IT conation zero");
    }
    else
    {
        printf("Not conatin zero");
    }
}
int main()
{
    int iNo1 = 0;
    printf("enter no  :\n");
    scanf("%d", &iNo1);
    noContainZero(iNo1);
    return 0;
}