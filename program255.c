#include <stdio.h>
void revString(char *ch, int size)
{
    int icnt = 0;
    for (icnt = size - 1; icnt >= 0; icnt--)
    {
        printf("%c", ch[icnt]);
    }
}
int main()
{
    char ch[10];
    printf("enter string for rev:\n");
    scanf("%[^'\n']s", ch);
    revString(ch, 10);
    return 0;
}