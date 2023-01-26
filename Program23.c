#include <stdio.h>
void Display(int iVal)
{
    if (iVal < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iNo1 = 0;
    printf("Enter No from User..?");
    scanf("%d", &iNo1);
    Display(iNo1);
    return 0;
}