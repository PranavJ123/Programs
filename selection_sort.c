#include <stdio.h>
int main()
{
    int size,i,j;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Sorted array is:");
    for (i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
}


