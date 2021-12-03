#include <stdio.h>  
 
void heapify(int a[], int n, int i)  
{  
    int largest = i;  
    int left = 2 * i + 1;  
    int right = 2 * i + 2;  
    if (left < n && a[left] > a[largest])  
        largest = left;   
    if (right < n && a[right] > a[largest])  
        largest = right;  
    if (largest != i) {    
        int temp = a[i];  
        a[i] = a[largest];  
        a[largest] = temp;  
          
        heapify(a, n, largest);  
    }  
}   
void heapSort(int a[], int n)  
{  
	int i;
    for (i = n / 2 - 1; i >= 0; i--)  
        heapify(a, n, i);   
    for (i = n - 1; i >= 0; i--) {  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
          
        heapify(a, i, 0);  
    }  
}  
int main()  
{  
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }  
    heapSort(arr, size);  
     printf("Sorted array is:");
     for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }   
} 
