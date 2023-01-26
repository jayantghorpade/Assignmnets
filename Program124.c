#include <stdio.h>
int Frequency2(int iVal)
{
    int irem = 0;
    int count = 0;
    while (iVal != 0)
    {
        irem = iVal % 10;
        if (irem == 4)
        {
            count++;
        }
        iVal = iVal / 10;
    }
    return count;
}
int main()
{
    int iNo1 = 0;
    int iret = 0;
    printf("ENTER NO");
    scanf("%d", &iNo1);
    iret = Frequency2(iNo1);
    printf("%d", iret);
    return 0;
}