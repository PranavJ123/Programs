#include<stdio.h>

int partition(int arr[],int low , int high){
    int pivot = arr[high];
    int i=low-1;
    int j;
    for(j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;
    return i+1;
}

void quickSort(int arr[],int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

int main(){
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,size-1);
    printf("Sorted array is:");
     for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
