#include <stdio.h>
#include <stdlib.h>
int noDivisible5(int arr[], int iSize)
{
    int iCnt = 0;
    int countEven = 0;
    int coutnOdd = 0;
    printf("Given array even nos:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            coutnOdd++;
        }
    }
    return countEven - coutnOdd;
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
    iRet = noDivisible5(ptr, iSize);
    printf("array Even no'are:%d", iRet);
    free(ptr);
    return 0;
}
