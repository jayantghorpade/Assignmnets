#include <stdio.h>
int DisplayR(int no)
{
    static int sum = 0;
    printf("%d", sum);
    int irem = 0;
    if (no != 0)
    {
        irem = no % 10;
        sum = sum + irem;
        no = no / 10;
        DisplayR(no);
    }
    return sum;
}
int main()
{
    int iret = 0;
    int val = 0;
    printf("enter no-:\n");
    scanf("%d", &val);
    iret = DisplayR(val);
    printf("sum of %d is=%d", val, iret);
    return 0;
}