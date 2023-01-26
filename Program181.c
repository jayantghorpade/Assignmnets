#include <stdio.h>
void Display(int iNo)
{
    int row = 0;
    char ch = 'A';
    for (row = 1; row <= iNo; row++, ch++)
    {
        printf("%c ", ch);
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