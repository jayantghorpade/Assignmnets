#include <stdio.h>
typedef int Bool;
#define True 1
#define False 0
int DivisibleByFive(int iNo)
{
    if (iNo % 5 == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
}
int main()
{
    int iVal = 0;
    int iret = False;
    printf("Enter your no=\n");
    scanf("%d", &iVal);
    iret = DivisibleByFive(iVal);
    if (iret == True)
    {
        printf("No is Divisible By five");
    }
    else
    {
        printf("No is not Divisible by five");
    }
    return 0;
}