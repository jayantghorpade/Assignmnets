#include <stdio.h>
#include <stdbool.h>
typedef unsigned int uint;
bool BitCheck(uint no, uint pos)
{
    uint result = 0;
    uint mask = 0x00000001;
    mask = mask << (pos - 1);
    result = mask & no;
    if (result==mask)
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
    uint val = 0;
    uint pos = 0;
    bool bret = false;
    printf("Enter The no :\n");
    scanf("%d", &val);
    printf("enter Possition:\n");
    scanf("%d", &pos);
    bret=BitCheck(val, pos);
    if (bret == true)
    {
        printf("TRUE %d\n",pos);
    }
    else
    {
        printf("FALSE %d\n",pos);
    }
    return 0;
}