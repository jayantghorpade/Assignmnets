#include<stdio.h>
void CheckVal(int iVal)
{
    if (iVal < 50)
    {
        printf("SMALL");
    }
    else if (iVal > 50 && iVal < 100)
    {
        printf("Medium");
    }
    else if (iVal > 100)
    {
        printf("large");
    }
}
int main()
{
    int iNo1 = 0;
    printf("Enter First No:\n");
    scanf("%d", &iNo1);
    CheckVal(iNo1);
    return 0;
}