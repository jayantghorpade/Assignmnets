#include <stdio.h>
#include <stdlib.h>
void arrayElement(int arr[], int iSize)
{
    int iCnt = 0;
    int irem = 0;
    int count = 0;
    int no = 0;
    printf("3 Digit elements are is:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        no = arr[iCnt];
        if (no > 100 && no < 999)
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
    int iRet = 0;
    printf("enter length of array:\n");
    scanf("%d", &iSize);
    ptr = (int *)malloc(iSize * sizeof(int));
    printf("enter elements of array:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    arrayElement(ptr, iSize);
    free(ptr);
    return 0;
}
