#include <stdio.h>
int iterate(start, end)
{
    int isum = 0;
    if (start > end)
    {
        printf("Invalid input\n");
    }
    else if (start < 0 && end > 0)
    {
        printf("invalid input\n");
    }
    else
    {
        while (start <= end)
        {
            isum = isum + start;
            start++;
        }
    }
    return isum;
}
int main()
{
    int istart = 0;
    int iend = 0;
    printf("enter start loop no :\n");
    scanf("%d", &istart);
    printf("enter end loop no :\n");
    scanf("%d", &iend);
    int iret = iterate(istart, iend);
    printf("sum is :%d", iret);
    return 0;
}