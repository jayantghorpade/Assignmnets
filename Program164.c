#include <stdio.h>
#include <stdlib.h>
void rangeBetweenNo(int arr[], int iSize, int start, int end)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (arr[iCnt] > start && arr[iCnt] < end)
        {
            printf("%d ", arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0;
    int start = 0;
    int end = 0;
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
    printf("enter no start no :\n");
    scanf("%d", &start);
    printf("enter end no :\n");
    scanf("%d", &end);
    rangeBetweenNo(ptr, iSize, start, end);
    free(ptr);
    return 0;
}
