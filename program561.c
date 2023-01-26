#include <stdio.h>
int whiteSpaceCount(char *Carr)
{
    static int iCnt = 0;
    if (*Carr != '\0')
    {
        if (*Carr == ' ')
        {
            iCnt++;
        }
        Carr++;
        whiteSpaceCount(Carr);
    }
    return iCnt;
}
int main()
{
    int iret = 0;
    char Arr[20];
    printf("enter string-:\n");
    scanf("%[^'\n']s", Arr);
    iret = whiteSpaceCount(Arr);
    printf("string whitespace is -:%d", iret);
    return 0;
}