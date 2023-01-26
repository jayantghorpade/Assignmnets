#include <stdio.h>
int countWhiteSpace(char *ch)
{
    int count = 0;
    while (*ch != '\0')
    {
        if (*ch == 32)
        {
            count++;
        }
        ch++;
    }
    return count;
}
int main()
{
    char ch[20];
    int iret = 0;
    printf("enter string:\n");
    scanf("%[^'\n']s", ch);
    iret = countWhiteSpace(ch);\
    printf("the no of white spaces are :%d", iret);
    return 0;
}