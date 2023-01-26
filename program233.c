#include <stdio.h>
#include <stdbool.h>
bool CheckDigitOrNot(char ch)
{
    if (ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bret = false;
    printf("ENTER CHAR AS DIGIT BTWEEEN 0-9\n");
    scanf("%c", &ch);
    bret = CheckDigitOrNot(ch);
    if (bret == true)
    {
        printf("yes it is digitt");
    }
    else
    {
        printf("sorry it is not digit\n");
    }
    return 0;
}