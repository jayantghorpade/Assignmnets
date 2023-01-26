#include <stdio.h>
void CheckTimeTable(char ch)

{
    if (ch == 'A' || ch == 'a')
    {
        printf("YOUR EXAM AT 7 AM");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("YOUR EXAM At 8.30 Am");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("YOUR EXAM At 9.20 Am");
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("YOUR EXAM At 10.30 Am");
    }
    else
    {
        printf("SORRY INVALID INPUT\n");
    }
}

int main()
{
    char ch = '\0';
    printf("Enter Division\n");
    scanf("%c", &ch);
    CheckTimeTable(ch);
    return 0;
}
