#include <stdio.h>
int Display(int no)
{
    static int Product = 1;
    int irem = 0;
    if (no != 0)
    {
        irem = no % 10;
        Product = Product * irem;
        no = no/10;
        Display(no);
    }
    return Product;
}
int main()
{
    int val = 0, iret = 0;
    printf("enter no\n");
    scanf("%d", &val);
    iret = Display(val);
    printf("%d", iret);
    return 0;
}