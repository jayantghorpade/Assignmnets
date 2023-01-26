#include <stdio.h>
void convertLowerCase(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch >= 'A' && *ch <= 'Z')
        {
            printf("%c", *ch + 32);
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
    convertLowerCase(ch);
    return 0;
}