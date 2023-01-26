#include <stdio.h>
int smallDigit(int no)
{
    int irem = 0;
    static int min = 9;
    if (no != 0)
    {
        irem = no % 10;
        if (irem < min)
        {
            min = irem;
        }
        no = no / 10;
        smallDigit(no);
    }
    return min;
}
int main()
{
    int no = 0;
    int iret = 0;
    printf("enter no -:\n");
    scanf("%d", &no);
    iret = smallDigit(no);
    printf("min digit from %d is = %d", no, iret);
}