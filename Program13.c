#include <stdio.h>
void Display()
{
    int iCnt = 0;
    int iNo = 5;
    for (iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    Display();
    return 0;
}