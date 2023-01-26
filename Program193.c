#include <stdio.h>
void Display(int iNo1, int iNo2)
{
    int row = 0;
    int col = 0;
    for (row = 1; row <= iNo1; row++)
    {
        for (col = iNo2; col >= 1; col--)
        {
            printf("%d\t", col);
        }
        printf("\n");
    }
}
int main()
{
    int iVal1 = 0;
    int iVal2 = 0;
    printf("enter no of rows:\n");
    scanf("%d", &iVal1);
    printf("enter no of cols:\n");
    scanf("%d", &iVal2);
    Display(iVal1, iVal2);
    return 0;
}