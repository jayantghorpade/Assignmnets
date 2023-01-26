
#include <stdio.h>
void DisplayNo(int iVal)
{
    int ipos = 0;
    if (iVal > 0)
    {
        ipos = -iVal;
    }
    while (ipos <= iVal)
    {
        printf("%d ", ipos);
        ipos++;
    }
}
int main()
{
    int iNo1 = 0;
    printf("Enter No :\n");
    scanf("%d", &iNo1);
    DisplayNo(iNo1);
    return 0;
}