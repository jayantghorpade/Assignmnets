#include <stdio.h>
#include <stdlib.h>
void noDivisible5(int arr[], int iSize)
{
    int iCnt = 0;
    printf("Given array even nos:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] % 2 == 0 && arr[iCnt] % 5 == 0)
        {
            printf("%d\n", arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int iCnt = 0;
    int *ptr = NULL;
    printf("enter length of array:\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter elements of array:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    noDivisible5(ptr, iSize);
    free(ptr);
    return 0;
}
