#include <stdio.h>
void ToggleChar(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch == 32)
        {
            printf(" ");
        }
        if (*ch >= 'A' && *ch <= 'Z')
        {
            printf("%c", *ch + 32);
        }
        else
        {
            printf("%c", *ch - 32);
        }
        ch++;
    }
}
int main()
{
    char ch[20];
    printf("enter String:\n");
    scanf("%[^'\n']s", ch);
    ToggleChar(ch);
    return 0;
}