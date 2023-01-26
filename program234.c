#include <stdio.h>
#include <stdbool.h>
bool checkChar(char ch)
{
    if (ch >= 'a' && ch <= 'z')
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
    printf("ENTER CHAR\n");
    scanf("%c", &ch);
    bret = checkChar(ch);
    if (bret == true)
    {
        printf("yes it is Small in case\n");
    }
    else
    {
        printf("sorry it is capital case\n");
    }
    return 0;
}