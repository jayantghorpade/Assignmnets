#include <stdio.h>
float TemToFar(float fVal)
{
    float celcius = 0.0;
    celcius = (fVal - 32) * 5 / 9;
    return celcius;
}
int main()
{
    float fNo1 = 0;
    float fAns = 0.0;
    printf("ENTER NO Temprature:\n");
    scanf("%f", &fNo1);
    fAns = TemToFar(fNo1);
    printf("%f", fAns);
    return 0;
}