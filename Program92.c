#include <stdio.h>
int dollerToRs(int Doller)
{
    return Doller * 70;
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("Enter doller\n");
    scanf("%d", &iNo1);
    iRet = dollerToRs(iNo1);
    printf("doller %d in rs :%d", iNo1, iRet);
    return 0;
}