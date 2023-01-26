#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int OpenFile(char Name[])
{
    int fd = 0, i = 0;
    char ch='\0';
    int Length = 0, icnt = 0;
    char Data[100];
    fd = open(Name, O_RDONLY);
    if (fd == -1)
    {
        printf("Invalid name enter:\n");
        return -1;
    }
printf("Enter the char:\n");
    scanf(" %[^'\n']", &ch);
    while ((Length = read(fd, Data, sizeof(Data))) != 0)
    {
        for (i = 0; i < Length; i++)
        {
            if (Data[i] ==ch)
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
    char ch = '\0';
    printf("Enter the file name :\n");
    scanf("%s", Name);
    iRet = OpenFile(Name);
    printf("frequency count of lchar =:%d", iRet);
    return 0;
}