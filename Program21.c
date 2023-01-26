#include <stdio.h>
void Display(int iValue)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int iNo1 = 0;
    printf("How many star you wants to print....?\n");
    scanf("%d", &iNo1);
    Display(iNo1);
    return 0;
}