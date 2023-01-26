#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int OpenFile(char Fname[])
{
    int fd = 0;
    int Size = 0;
    int Length = 0;
    char Data[100];
    fd = open(Fname, O_RDONLY);
    if (fd == -1)
    {
        printf("please Enter vaild File name :\n");
        return -1;
    }
    while ((Length = read(fd, Data, sizeof(Data))) != 0)
    {
        Size = Size + Length;
    }
    printf("size of %s is %d Bytes", Fname, Size);
    close(fd);
}
int main()
{
    int fd = 0;
    char fname[20];
    printf("enter the file name:\n");
    scanf("%s", fname);
    OpenFile(fname);
    return 0;
}