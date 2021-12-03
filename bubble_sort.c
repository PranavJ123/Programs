
#include<stdio.h>

void bubbleSort(int arr[], int size){
    int counter = 1;
    int i;
    while(counter < size){
        for(i=0;i<size-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    printf("Sorted elements are:");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
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

    bubbleSort(arr,size);
    
}
