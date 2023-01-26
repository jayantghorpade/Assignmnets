#include <stdio.h>
void convertUpperCase(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch >= 'a' && *ch <= 'z')
        {
            printf("%c", *ch - 32);
        }
        else
        {
            printf("%c", *ch);
        }
        ch++;
    }
}
int main()
{
    char ch[20];
    printf("enter String:\n");
    scanf("%[^'\n']s", ch);
    convertUpperCase(ch);
    return 0;
}