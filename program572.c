#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
int OpenFile(char Fname[])
{
    int fd = 0;
    fd = creat(Fname, 0777);
    return fd;
}
int main()
{
    int Fd = 0;
    char name[20];
    printf("Enter file name that u want to create:\n");
    scanf("%s", &name);
    Fd = OpenFile(name);
    if (Fd == -1)
    {
        printf("Unable to create File\n");
    }
    else
    {
        printf("File created  Sucessfully");
    }
    return 0;
}