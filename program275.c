#include <stdio.h>
void charIndexCheck(char *ch)
{
    char *start = ch;
    char *end = ch;
    char temp = '\0';
    while (*end != '\0')
    {
        end++;
    }
    end--;
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    //  while (end >= ch)
    //  {
    //     printf("%c", *end);
    //     end--;
    // }
}
int main()
{
    char ch[10];

    printf("Enter String from user:\n");
    scanf("%[^'\n']s", ch);
    printf("Original String is:%s\n", ch);
    charIndexCheck(ch);
    printf("reverse Updated String:%s\n", ch);
    return 0;
}