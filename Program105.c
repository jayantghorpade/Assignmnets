#include <stdio.h>
float sqfootTosqmeter(float fVal)
{
    float sqft = fVal * 0.0929;
    return sqft;
}
int main()
{
    float fNo1 = 0;
    float fAns = 0.0;
    printf("ENTER area in sq feet:\n");
    scanf("%f", &fNo1);
    fAns = sqfootTosqmeter(fNo1);
    printf("sqfootTosqmeter :%f", fAns);
    return 0;
}