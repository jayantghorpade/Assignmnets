#include <stdio.h>
#define true 1
#define false 0
typedef int bool;
bool checkCharPresentOrNot(char *ch, char ch1)
{
    while (*ch != '\0')
    {
        if (*ch == ch1)
        {
            break;
        }
        ch++;
    }
    if (*ch == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    char ch[20];
    char ch1 = '\0';
    bool bret = false;
    printf("enter String:\n");
    scanf("%[^'\n']s", ch);
    printf("Enter Char to check:\n");
    scanf(" %c", &ch1);
    bret = checkCharPresentOrNot(ch, ch1);
    if (bret == true)
    {
        printf("True char is present%c", ch1);
    }
    else
    {
        printf("false char is not present:%c\n", ch1);
    }
    return 0;
}