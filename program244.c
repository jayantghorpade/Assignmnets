#include <stdio.h>
#include <stdbool.h>
bool DisplaySpecialChar(char ch)
{
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char ch = '\0';
    bool bret = false;
    printf("Enter charchter:\n");
    scanf("%c", &ch);
    bret = DisplaySpecialChar(ch);
    if (bret == true)
    {
        printf("True");
    }
    else
    {
        printf("false");
    }
    return 0;
}