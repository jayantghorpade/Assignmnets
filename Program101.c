#include <stdio.h>
#define PI 3.14
float calArea(float fRadius)
{
    float area = 0.0;
    area = PI * fRadius * fRadius;
    return area;
}
int main()
{
    float fNo1 = 0.0;
    float fRet=0.0;
    printf("Enter Radius :\n");
    scanf("%f", &fNo1);
    fRet=calArea(fNo1);
    printf("%.4f",fRet);
    return 0;
}