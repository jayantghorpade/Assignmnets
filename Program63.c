#include <stdio.h>
#include <stdbool.h>
bool noEqualOrNot(iVal)
{
    int temp = 10;
    if (iVal == temp)
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
    int iNo = 0;
    bool bret = false;
    printf("enter no:\n");
    scanf("%d", &iNo);
    bret = noEqualOrNot(iNo);
    if (bret)
    {
        printf("Equal");
    }
    else
    {
        printf("not Equal");
    }
    return 0;
}