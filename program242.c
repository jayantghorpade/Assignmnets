#include <stdio.h>
void DisplayChar(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c", 32 + ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c", ch - 32);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c", ch);
    }
    else
    {
        printf("%c", ch);
    }
}
int main()
{
    char ch = '\0';
    printf("Please enter charachter:\n");
    scanf("%c", &ch);
    DisplayChar(ch);
    return 0;
}