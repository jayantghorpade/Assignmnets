#include <stdio.h>
void iterate(start, end)
{
    if(start>end)
    {
        printf("Invalid input");
    }
    else{
    while (start <= end)
    {
        printf("%d ", start);
        start++;
    }
    }
}
int main()
{
    int istart = 0;
    int iend = 0;
    printf("enter start loop no :\n");
    scanf("%d", &istart);
    printf("enter end loop no :\n");
    scanf("%d", &iend);
    iterate(istart, iend);
    return 0;
}