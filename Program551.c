#include <stdio.h>
void PatternR(int no)
{
    static int iCnt = 0;
    if (iCnt < no)
    {
        printf("%d * ", no - iCnt);
        iCnt++;
        PatternR(no);
    }
}
int main()
{
    int val = 0;
    printf("enter no -:\n");
    scanf("%d", &val);
    PatternR(val);
    return 0;
}