#include <stdio.h>
#include <stdlib.h>
int maxElement(int arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] > iMax)
        {
            iMax = arr[iCnt];
        }
    }
    return iMax;
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
    iRet = maxElement(ptr, iSize);
    printf("array of amx element is%d", iRet);
    free(ptr);
    return 0;
}
