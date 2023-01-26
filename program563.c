#include <stdio.h>
int StrLenXR(char *Arr)
{
    static int iCnt = 0;
    if (*Arr != '\0')
    {
        if (*Arr >= 'a' && *Arr <= 'z')
        {
            iCnt++;
        }
        Arr++;
        StrLenXR(Arr);
    }
    return iCnt;
}
int main()
{
    int iret = 0;
    char Arr[20];
    printf("enter string-:\n");
    scanf("%[^'\n']s", Arr);
    iret = StrLenXR(Arr);
    printf("string length is -:%d", iret);
    return 0;
}