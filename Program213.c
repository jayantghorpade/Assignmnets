#include <stdio.h>
void Display(iVal1, iVal2)
{
    int row = 0;
    int col = 0;
    char ch = 'a';
    for (row = 1; row <= iVal1; row++)
    {
        for (col = 1; col <= iVal2; col++)
        {
            if (row % 2 == 0)
            {
                printf("%d\t", col);
            }
            else
            {
                printf("%c\t", ch);
                ch++;
            }
        }
        ch = 'a';
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