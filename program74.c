#include <stdio.h>
void NoddNos(int iVal)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iVal; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d ", iCnt);
        }
    }
}
int main()
{
    int iNo1 = 0;
    printf("enter No :\n");
    scanf("%d", &iNo1);
    NoddNos(iNo1);

    return 0;
}