#include <stdio.h>
#include <stdbool.h>
typedef unsigned int uint;
uint BitCheck(uint no)
{
    uint result = 0;
    uint mask = 0x99999999;
    result = mask ^ no;
    return result;
}
int main()
{
    uint val = 0;
    uint bret = 0;
    printf("Enter The no :\n");
    scanf("%d", &val);
    bret = BitCheck(val);
    printf("updated no is %d\n", bret);
    return 0;
}