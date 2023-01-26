
#include <stdio.h>
void DisplayNo(int iVal)
{

    int ipos = iVal;
    if (iVal > 0)
    {
        iVal = -iVal;
    }
    while (iVal != ipos + 1)
    {
        printf("%d ", iVal);
        iVal++;
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