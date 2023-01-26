#include <stdio.h>
#include <stdbool.h>
bool vowelCheck(char *ch)
{
    bool flag = false;
    while (*ch != '\0')
    {
        if (*ch == 'a' || *ch == 'A' || *ch == 'e' || *ch == 'E' || *ch == 'i' || *ch == 'I' || *ch == 'o' || *ch == 'O' || *ch == 'u' || *ch == 'U')
        {
            flag = true;
        }
        ch++;
    }
    return flag;
}

int main()
{
    char ch[10];
    bool bret = false;
    printf("ENTER STRING\n");
    scanf("%[^'\n']s", ch);
    bret = vowelCheck(ch);
    if (bret == true)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }

    return 0;
}