#include <stdio.h>
void namePrint()
{
    char name[20];
    gets(name);
    printf("my name is: %s", name);
}
int main()
{

    int iCnt = 0;
    printf("Enter name :\n");
    namePrint();
    return 0;
}