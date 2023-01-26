#include <stdio.h>
void Display(int iVal, int iVal1)
{
    char ch = 'A';
    char cha = 'a';
    int iCnt = 0;
    int iCnt1 = 0;
    for (iCnt = 1; iCnt <= iVal; iCnt++)
    {
        for (iCnt1 = 1; iCnt1 <= iVal1; iCnt1++)
        {
            if (iCnt % 2 == 0)
            {
                printf("%c", cha);
                cha++;
            }
            else
            {
                printf("%c", ch);
                ch++;
            }
        }
        ch = 'A';
        cha = 'a';
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