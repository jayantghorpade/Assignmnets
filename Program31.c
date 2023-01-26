#include <stdio.h>
void DisplayNoOfEven(int iVal)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iVal;iCnt++)
    {
        printf("%d\t", iCnt*2);
    }
}
int main()
{
    int iNo1 = 0;
    printf("Enter No=\n");
    scanf("%d", &iNo1);
    DisplayNoOfEven(iNo1);
}