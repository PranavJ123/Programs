#include<stdio.h>
int main(){
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(i=1;i<size;i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    printf("Sorted array is:");
    for(i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
