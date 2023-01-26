#include <stdio.h>
#include <stdlib.h>
void Calculator()
{
    while (1)
    {
        int Val = 0, Length = 0, *Arr = NULL, i = 0, Sum = 0, Sub = 0, Mul = 1, no1 = 0, no2 = 0;
        printf("<----------------------------------->\n");
        printf(" 1 :  ADDITION\n");
        printf(" 2 :  SUBSTRACTION\n");
        printf(" 3 :  MULTIPLICATION\n");
        printf(" 4 :  Division\n");
        printf(" 5 :  Exits \n");
        printf("<----------------------------------->\n");
        printf("Enter No What do you Want -:\n");
        scanf("%d", &Val);
        switch (Val)
        {
        case 1:
            printf("ENTER HOW MANY NO YOU WANT TO ADD\n");
            scanf("%d", &Length);
            printf("Enter YOUR ELEMNTS  ONE BY ONE THAT YOU WANT TO ADD -:\n");
            Arr = (int *)malloc(sizeof(int) * Length);
            for (i = 0; i < Length; i++)
            {
                printf("Enter %d  Elements -: ", i + 1, "\n");
                scanf("%d", &Arr[i]);
            }
            for (i = 0; i < Length; i++)
            {
                Sum = Sum + Arr[i];
            }
            printf("\n<---------------------------------->\n");
            printf("\n Addition is --> %d\n", Sum, "\n");
            free(Arr);
            break;
        case 2:
            printf("ENTER HOW MANY NO YOU WANT TO Substract\n");
            scanf("%d", &Length);
            printf("Enter YOUR ELEMNTS  ONE BY ONE THAT YOU WANT TO Sub -:\n");
            Arr = (int *)malloc(sizeof(int) * Length);
            for (i = 0; i < Length; i++)
            {
                printf("Enter %d  Elements -: ", i + 1, "\n");
                scanf("%d", &Arr[i]);
            }
            for (i = 0; i < Length; i++)
            {
                Sub = Sub - Arr[i];
            }
            printf("\n<---------------------------------->\n");
            printf("\nSubstraction is --> %d", Sub);
            free(Arr);
            break;
        case 3:
            printf("ENTER HOW MANY NO YOU WANT TO Multiply\n");
            scanf("%d", &Length);
            printf("Enter YOUR ELEMNTS  ONE BY ONE THAT YOU WANT TO Multiply -:\n");
            Arr = (int *)malloc(sizeof(int) * Length);
            for (i = 0; i < Length; i++)
            {
                printf("Enter %d  Elements -: ", i + 1, "\n");
                scanf("%d", &Arr[i]);
            }
            for (i = 0; i < Length; i++)
            {
                Mul = Mul * Arr[i];
            }
            printf("\n<---------------------------------->\n");
            printf("\nMultiplication is --> %d", Mul, "\n");
            free(Arr);
            break;
        case 4:
            printf("Enter Nos For Divsion -:\n");
            printf("Enter First No -:\n");
            scanf("%d", &no1);
            printf("Enter Second No -:\n");
            scanf("%d", &no2);
            printf("\n<---------------------------------->\n");
            printf("\nDivision is --> %d\n", no1 / no2, "\n");
            break;
        case 5:
            return;
            break;
        default:
            printf("\n***************ERROR : ENTER VALID INPUT ******************!!!\n");
        }
    }
}
int main()
{
    printf("<------Welcome to Jayant Infotech----------->\n");
    Calculator();
    return 0;
}