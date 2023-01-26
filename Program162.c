#include <stdio.h>
#include <stdlib.h>
int noDivisible5(int arr[], int iSize, int iVal)
{
    int iCnt = 0;
    int countfre = 0;
    printf("Given array even nos:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] == iVal)
        {
            break;
        }
    }
    if (iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iSize = 0;
    int iNo1 = 0;
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
    printf("enter no to check frequency :\n");
    scanf("%d", &iNo1);
    iRet = noDivisible5(ptr, iSize, iNo1);
    if (iRet == -1)
    {
        printf("NO is No occure in array%d", iRet);
    }
    else
    {
        printf("%d is occure in array %d index", iNo1, iRet);
    }
    free(ptr);
    return 0;
}
