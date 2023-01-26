#include <stdio.h>
void Display(int iVal, int iIterate)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <=abs(iIterate); iCnt++)
    {
        printf("%d ",iVal);
    }
}
int main()
{
    int iNo1 = 0;
     int iNo2 = 0;
    printf("Enter No YOU WANT TO DISPLAY=\n");
    scanf("%d", &iNo1);
    printf("Enter NO HOW MANY TIMES ITERTAE=\n");
    scanf("%d", &iNo2);
    Display(iNo1, iNo2);
    return 0;
}