#include <stdio.h>
void digitSeprate(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch >= '0' && *ch <= '9')
        {
            printf("%c", *ch);
        }

        ch++;
    }
}
int main()
{
    char ch[20];
    printf("enter string:\n");
    scanf("%[^'\n']s", ch);
    digitSeprate(ch);
    return 0;
}