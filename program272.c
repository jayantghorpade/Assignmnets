#include <stdio.h>
int charFrequencyCheck(char *ch, char ch1)
{
    int count = 0;
    while (*ch != '\0')
    {
        if (*ch == ch1)
        {
            count++;
        }
        ch++;
    }
    return count;
}
int main()
{
    char ch[20];
    char ch1 = '\0';
    int iret = 0;
    printf("Enter String from user:\n");
    scanf("%[^'\n']s", ch);
    printf("Enter char to check frequency:\n");
    scanf(" %c", &ch1);
    iret = charFrequencyCheck(ch, ch1);
    printf("count is :%d\n", iret);
    return 0;
}