#include <stdio.h>
int countCapitalChar(char *ch)
{
    int iCnt = 0, iCnt1 = 0;
    while (*ch != '\0')
    {
        if (*ch >= 'a' && *ch <= 'z')
        {
            iCnt++;
        }
        else if (*ch >= 'A' && *ch <= 'Z')
        {
            iCnt1++;
        }
        ch++;
    }
    return iCnt - iCnt1;
}
int main()
{
    char ch[30];
    int iret = 0;
    printf("ENTER STRING\n");
    scanf("%[^'\n']s", ch);
    iret = countCapitalChar(ch);
    printf("captial letters are:%d\n", iret);
    return 0;
}