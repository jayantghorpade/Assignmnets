#include <stdio.h>
void Display(int iVal1, int iVal2)
{
    int row = 0;
    int col = 0;
    for (row = 1; row <= iVal1; row++)
    {
        for (col = 1; col <= 4; col++)
        {
            if (row >= col)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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
    scanf("%d", &iNo1);
    Display(iNo1, iNo2);

    return 0;
}