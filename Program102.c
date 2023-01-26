#include <stdio.h>
float CalArea(float fwidth, float fheight)
{
    float area = 0.0;
    area = fwidth * fheight;
    return area;
}
int main()
{
    float fwidth = 0.0;
    float fheight = 0.0;
    printf("ENTER width :\n");
    scanf("%f", &fwidth);
    printf("ENTER height :\n");
    scanf("%f", &fheight);
    float fRet = 0.0;
    fRet = CalArea(fwidth, fheight);
    printf("%.2f", fRet);
    return 0;
}