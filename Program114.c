#include <stdio.h>
int iterate(start, end)
{
    int isum = 0;
    if (start > end)
    {
        printf("Invalid range\n");
    }
    else if (start < 0 && end > 0)
    {
        printf("invalid range\n");
    }
    else
    {
        while (start <= end)
        {
            if (start % 2 == 0)
            {
                isum = isum + start;
            }
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