#include <stdio.h>
void Display(iVal1, iVal2)
{
    int row = 0;
    int col = 0;
    int temp = 2;
    int temp1 = 3;
    int temp2 = 4;
    for (row = 1; row <= iVal1; row++)
    {
        for (col = 1; col <= iVal2; col++)
        {
            if (row == 1)
            {
                printf("%d\t", col);
            }
            else if (row == 2)
            {

                printf("%d\t", temp);
                temp++;
            }
            else if (row == 3)
            {
                printf("%d\t", temp1);
                temp1++;
            }
            else
            {
                printf("%d\t", temp2);
                temp2++;
            }
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