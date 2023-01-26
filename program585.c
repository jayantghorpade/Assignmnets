#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int OpenFile(char ch[])
{
    int fd = 0;
    int no = 0;
    char Data[20];
    fd = open(ch, O_RDONLY);
    if (fd == -1)
    {
        printf("file is wrong:\n");
        return -1;
    }
    printf("enter no of char print\n");
    scanf("%d", &no);
    int Length = read(fd, Data, no);
    write(1, Data, Length);
}
int main()
{
    char ch[20];
    printf("enter the file name:\n");
    scanf("%s", ch);
    OpenFile(ch);
    return 0;
}