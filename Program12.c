#include <stdio.h>
void Display()
{
    int iCnt = 0;
    for (iCnt = 1 /*iniitlisation*/; iCnt <= 5 /*condition*/; iCnt++ /*displacement*/)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();
    return 0;
}