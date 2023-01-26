#include <stdio.h>
void upperCase(char cAlpha1)
{
    char cAns = toupper(cAlpha1);
    printf("upercase of %c=%c\n", cAlpha1, cAns);
}
void lowerCase()
{
    char cVal2='\0';
    printf("enter Characher for to lower case\n");
    scanf("%c", &cVal2);
    char cAns1 = tolower(cVal2);
    printf("lower case%cis=%c\n", cVal2, cAns1);
}
int main()
{
    char cVal1 = '\0', cVal2 = '\0';
    printf("enter Characher for uppercase\n");
    scanf("%c", &cVal1);
    upperCase(cVal1);
    lowerCase();
    return 0;
}