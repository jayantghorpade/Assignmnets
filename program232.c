#include <stdio.h>
int check(char ch)
{
    if ((ch >= 'A' && ch <= 'Z'))
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
    printf("CHECK WHEATER LETTER IS CAPITAL OR NOT \n");
    scanf("%c", &ch);
    iret = check(ch);
    if (iret)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE\n");
    }
    return 0;
}