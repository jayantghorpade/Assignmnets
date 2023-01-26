#include <stdio.h>
void Display(int iNo)
{
    int row = 0;
    for (row = 1; row <= iNo; row++)
    {
        printf("%d\t*\t", row);
    }
}
int main()
{
    int iVal = 0;
    printf("enter no:\n");
    scanf("%d", &iVal);
    Display(iVal);
    return 0;
}