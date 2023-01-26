
#include <stdio.h>
void DisplayNo(int iVal)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iVal; iCnt++)
    {
        printf("%d ", iCnt);
    }
}
int main()
{
    int iNo1 = 0;
    printf("Enter No :\n");
    scanf("%d", &iNo1);
    DisplayNo(iNo1);
    return 0;
}