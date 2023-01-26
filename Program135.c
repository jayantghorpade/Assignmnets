#include <stdio.h>
int DiffOddEvenDigit(iVal)
{
    int irem = 0;
    int evensum = 0;
    int oddsum = 0;
    while (iVal != 0)
    {
        irem = iVal % 10;
        if (irem % 2 == 0)
        {
            evensum = evensum + irem;
        }
        else
        {
            oddsum = oddsum + irem;
        }
        iVal = iVal / 10;
    }
    return evensum - oddsum;
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("Enter no :\n");
    scanf("%d", &iNo1);
    iRet = DiffOddEvenDigit(iNo1);
    printf("%d", iRet);
    return 0;
}