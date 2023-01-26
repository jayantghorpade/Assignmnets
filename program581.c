#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int OpenFile(char Name[])
{
    int fd = 0, i = 0;
    int Length = 0, icnt = 0;
    char Data[100];
    fd = open(Name, O_RDONLY);
    if (fd == -1)
    {
        printf("Invalid name enter:\n");
        return -1;
    }
    while ((Length = read(fd, Data, sizeof(Data))) != 0)
    {
        for(i=0;i<Length;i++)
        {
        if(Data[i] >= 'A' && Data[i] <= 'Z')
        {
            icnt++;
        }
        }
    }
    return icnt;
}
int main()
{
    int iRet = 0;
    char Name[20];
    printf("Enter yhe file name :\n");
    scanf("%s", Name);
    iRet = OpenFile(Name);
    printf("frequency count is =:%d", iRet);
    return 0;
}