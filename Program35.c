#include <stdio.h>
int Vowel(char alpha)
{
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'U' || alpha == 'O')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char c = '\0';
    int iret = 0;
    printf("ENTER CHAR TO CHECK VOWEL OR NOT=\n");
    scanf("%c", &c);
    iret = Vowel(c);
    if (iret)
    {
        printf("TRUE");
    }
    else
    {
        printf("False");
    }

    return 0;
}