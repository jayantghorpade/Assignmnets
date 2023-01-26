#include <stdio.h>
#include <stdbool.h>
typedef unsigned int uint;
uint BitCheck(uint no, uint pos)
{
    if ((pos < 1) || (pos > 32))
    {
        printf("Invalid position, it should between 1 to 32\n");
        return false;
    }
    uint result = 0;
    uint mask = 0x00000001;
    mask = mask << (pos - 1);
    result = mask ^ no;
    return result;
}
int main()
{
    uint val = 0;
    uint pos = 0;
    uint bret = 0;
    printf("Enter The no :\n");
    scanf("%d", &val);
    printf("enter Possition:\n");
    scanf("%d", &pos);
    bret = BitCheck(val, pos);
    printf("updated no is %d\n", bret);
    return 0;
}