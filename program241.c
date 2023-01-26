#include <stdio.h>
void AsciiTable()
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= 255; iCnt++)
    {
        printf("char %c |ascci value%d|hex value %x|octal %o\n", iCnt, iCnt, iCnt, iCnt);
    }
}
int main()
{
    AsciiTable();
    return 0;
}