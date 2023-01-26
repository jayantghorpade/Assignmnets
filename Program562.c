#include <stdio.h>
int MaxDigit(int no)
{
    int irem = 0;
    static int max = 0;
    if (no != 0)
    {
        irem = no % 10;
        if (irem > max)
        {
            max = irem;
        }
        no = no / 10;
        MaxDigit(no);
    }
    return max;
}
int main()
{
    int no = 0;
    int iret = 0;
    printf("enter no -:\n");
    scanf("%d", &no);
    iret = MaxDigit(no);
    printf("max digit from %d is = %d", no, iret);
}