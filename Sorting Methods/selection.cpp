#include<stdio.h>
void selection_sort(int arr[],int n){
	int i,j,min,temp;
	for(i=0;i<n-1;i++){
	min = i;
	for(j=i+1;j<n;j++){
		if(arr[j]< arr[min]){
			min = j;
		}
	}
	if(min!=i){
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	}
}
int main(){
	int i,n;
	printf("Enter no of elements :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements :");
	for(i = 0;i < n;i++){
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
	printf("Sorted array :");
	for(i = 0;i < n;i++){
		printf("%d\t",arr[i]);
	}
}
