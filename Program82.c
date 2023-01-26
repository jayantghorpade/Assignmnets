#include <stdio.h>
void DigitAlpha(int iVal)
{
    if(iVal<0)
    {
        iVal=-iVal;
    }
    switch (iVal)
    {
    case 9:
        printf("Nine");
        break;
    case 10 :
        printf("Ten");
        break;
    default:
        printf("Invalid Input");
    }
}

int main()
{
    int iNo1 = 0;
    printf("Enter no -: \n");
    scanf("%d", &iNo1);
    DigitAlpha(iNo1);
    return 0;
}