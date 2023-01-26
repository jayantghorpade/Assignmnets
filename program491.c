#include <stdio.h>
#include <stdbool.h>
typedef unsigned int uint;
bool CheckBit(uint Val)
{
    int result = 0;
    int mask = 0x00004000;
    result = Val & mask;
    if (result == mask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool bret = false;
    uint no = 0;
    printf("enter no to check 15 th bit start or stop -:\n");
    scanf("%d", &no);
    bret = CheckBit(no);
    if (bret == true)
    {
        printf("15 th bit is on \n");
    }
    else
    {
        printf("15 th bit is off ");
    }
    return 0;
}