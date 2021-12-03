#include<stdio.h>
int linearSearch(int arr[],int n,int key){
	int i;
	for(i =0;i<n;i++){
		if(arr[i]==key){
			return i+1;
		}
	}
	return -1;
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	printf("Element present in %d position ",linearSearch(arr,5,4));
}
