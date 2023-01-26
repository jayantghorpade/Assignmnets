#include <stdio.h>
void Display(int iVal, int iVal1)
{
    int iCnt = 0;
    int iCnt1 = 0;
    int temp = 1;
    for (iCnt = iVal; iCnt >= 1; iCnt--)
    {
        for (iCnt1 = 1; iCnt1 <= iVal1; iCnt1++)
        {
            printf("%d\t", temp);
            temp++;
        }

        printf("\n");
    }
}
int main()
{
    int iNo1 = 0, iNo2 = 0;
    printf("Enter no of rows:\n");
    scanf("%d", &iNo1);
    printf("Enter no of cols:\n");
    scanf("%d", &iNo2);
    Display(iNo1, iNo2);
    return 0;
}