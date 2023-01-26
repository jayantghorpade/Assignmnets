#include <stdio.h>
void multipleOfFour(int iVal)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", iVal * iCnt);
    }
}
int main()
{
    int iNo1 = 0;
    printf("enter No :\n");
    scanf("%d", &iNo1);
    multipleOfFour(iNo1);

    return 0;
}