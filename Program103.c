#include <stdio.h>
int KiloMterToMeter(int iKilometer)
{
    int iAns = 0;
    iAns = iKilometer * 1000;
    return iAns;
}
int main()
{
    printf("KiloMeter to Meter Converter\n");
    int iKiloMeter = 0;
    int iRet = 0;
    printf("Enter Kiloameter\n");
    scanf("%d", &iKiloMeter);
    iRet = KiloMterToMeter(iKiloMeter);
    printf("kilometer %d meter %d", iKiloMeter, iRet);
    return 0;
}