#include <stdio.h>
void iterate(start, end)
{
    if (start > end)
    {
        printf("invalid input");
    }
    else
    {
        while (end >= start)
        {
            printf("%d ", end);
            end--;
        }
    }
}
int main()
{
    int istart = 0;
    int iend = 0;
    printf("enter start no :\n");
    scanf("%d", &istart);
    printf("enter end no:\n");
    scanf("%d", &iend);
    iterate(istart, iend);
    return 0;
}