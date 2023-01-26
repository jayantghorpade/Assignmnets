#include <stdio.h>
int check(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char ch = 0;
    int iret = 0;
    printf("Enter ch to check char or not\n");
    scanf("%c", &ch);
    iret = check(ch);
    if (iret)
    {
        printf("YES IT IS CHAR....\n");
    }
    else
    {
        printf("SORRY IT IS NOT CHAR\n");
    }
    return 0;
}