#include <stdio.h>
void Display(int iVal1, int iVal2)
{
    int row = 0;
    int col = 0;
    int temp = 1;
    for (row = 1; row <= iVal1; row++)
    {
        for (col = 1; col <= iVal2; col++)
        {
            if (row >= 2 && row <= iVal1 - 1)
            {
                if (col >= 2 && col <= iVal2 - 1)
                {
                    printf("*\t");
                }
                else
                {
                    printf("%d\t", col);
                }
            }
            else
            {
                printf("%d\t", col);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    printf("ENTER NO OF ROW:\n");
    scanf("%d", &iNo1);
    printf("ENTER NO OF ROW:\n");
    scanf("%d", &iNo2);
    Display(iNo1, iNo2);

    return 0;
}