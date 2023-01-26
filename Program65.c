#include <stdio.h>
float calPercentage(float Marks, int totalMarks)
{
    float fResult = (Marks / totalMarks) * 100;
    return fResult;
}
int main()
{
    float fNo1 = 0.0;
    int iNo2 = 0;
    float fResult = 0.0;
    printf("Enter marks :\n");
    scanf("%f", &fNo1);
    printf("Enter Total marks :\n");
    scanf("%d", &iNo2);
    fResult = calPercentage(fNo1, iNo2);
    printf("%.1f", fResult);
}