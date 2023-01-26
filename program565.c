#include <stdio.h>
int reverseDigit(int no)
{
    static int rev = 0;
    int irem = 0;
    if (no != 0)
    {
        irem = no % 10;
        rev = (rev * 10) + irem;
        no = no / 10;
        reverseDigit(no);
    }
    return rev;
}
int main()
{
    int no = 0;
    int iret = 0;
    printf("enter no -:\n");
    scanf("%d", &no);
    iret = reverseDigit(no);
    printf("reverse  of %d is = %d", no, iret);
}