#include <stdio.h>
void Table(int iVal)
{
    int iCnt = 0;
    if (iVal < 0)
    {
        iVal = -iVal;
    }
    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iVal * iCnt);
    }
}
int main()
{
    int iNo1 = 0;
    int iAns = 0;
    printf("ENTER NO for Table:\n");
    scanf("%d", &iNo1);
    Table(iNo1);
    return 0;
}