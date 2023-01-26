#include <stdio.h>
void DisplayCharAsciiVal(char ch)
{
    printf("char %c ascii values is %d", ch, ch);
}
int main()
{
    char ch = '\0';
    printf("ENTER CHAR:\n");
    scanf("%c", &ch);
    DisplayCharAsciiVal(ch);
    return 0;
}