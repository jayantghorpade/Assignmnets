#include <stdio.h>
#include <stdbool.h>
bool checkNo(int iVal)
{
    if (iVal > 100)
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
    bret = checkNo(iNo);
    if (bret)
    {
        printf("Greater");
    }
    else
    {
        printf("smaller");
    }
}