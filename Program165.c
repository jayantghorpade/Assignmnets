#include <stdio.h>
#include <stdlib.h>
int oddNoProduct(int arr[], int iSize)
{
    int iCnt = 0;
    int iMul = 1;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] % 2 != 0)
        {
            iMul = iMul * arr[iCnt];
        }
    }
    return iMul;
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
    iRet = oddNoProduct(ptr, iSize);
    if (iRet == 1)
    {
        printf("odd no Product is=0");
    }
    else
    {
        printf("odd no Product is=%d", iRet);
    }
    free(ptr);
    return 0;
}
