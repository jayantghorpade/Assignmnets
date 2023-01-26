#include <stdio.h>
void EvenFactor(int iVal)
{
    int iCnt = 0;
    for (iCnt = 2; iCnt < iVal/2; iCnt=iCnt+2)
    {
        if (iVal % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iNo1 = 0;
    printf("Enter No=\n");
    scanf("%d", &iNo1);
    EvenFactor(iNo1);
}