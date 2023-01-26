#include <stdio.h>
int charIndexCheck(char ch[], char ch1, int size)
{
    int iCnt = 0;
    for (iCnt = size; iCnt >= 0; iCnt--)
    {
        if (ch[iCnt] == ch1)
        {
            break;
        }
    }
    if (iCnt == 0)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    char ch[20];
    char ch1 = '\0';
    int iret = 0;
    printf("Enter String from user:\n");
    scanf("%[^'\n']s", ch);
    printf("Enter char to check frequency:\n");
    scanf(" %c", &ch1);
    iret = charIndexCheck(ch, ch1, 20);
    if (iret == -1)
    {
        printf("not fount index :\n");
    }
    {
        printf("last indexis  is:%d\n", iret);
    }
    return 0;
}