#include <stdio.h>
void DisplayChar(ch)
{
    int icnt = 0;
    if (ch >= 'A' && ch <= 'Z')
    {
        for (icnt = ch; icnt <= 'Z'; icnt++)
        {
            printf("%c ", icnt);
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        for (icnt = ch; icnt >= 'a'; icnt--)
        {
            printf("%c ", icnt);
        }
    }
    else
    {
        printf(" ");
    }
}
int main()
{
    char ch = '\0';
    printf("Enter charchter:\n");
    scanf("%c", &ch);
    DisplayChar(ch);
    return 0;
}