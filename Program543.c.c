#include <stdio.h>
void Display(int no)
{
    static int iCnt = 0;
    if (iCnt < no)
    {
        printf("%d\t", no - iCnt);
        iCnt++;
        Display(no);
    }
}
int main()
{
    int Val = 0;
    printf("enter no to print star-:\n");
    scanf("%d", &Val);
    Display(Val);
}