#include <stdio.h>
#include <stdbool.h>
typedef unsigned int uint;
uint CheckBit(uint Val)
{
    int result = 0;
    int mask = 0x00000040;
    result = Val ^ mask;
    return result;
}
int main()
{
    uint bret = false;
    uint no = 0;
    printf("enter no to check 15 th bit start or stop -:\n");
    scanf("%d", &no);
    bret = CheckBit(no);

    printf("Updated no is -:%d", bret);
    return 0;
}