//bubble sort
#include<stdio.h>
int bubble_sort(int arr[],int n){
int i,j,temp;
int flag;
for(i = 0;i < n - 1; i++){
	flag = 0;
	for(j = 0;j < n-i-1;j++){
		if(arr[j] > arr[j+1]){
			temp = arr[j];
			arr[j]  = arr[j+1];
			arr[j+1] = temp;
			flag = 1;
		}
	}
	if(flag == 0){
		break;
	}
}	
}
int main(){
	int n;
	printf("Enter no of elements:");
	scanf("%d",&n);
	int arr[n], i;
	printf("Enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	printf("Sorted array :");
	for(i = 0; i < n;i++){
		printf("%d \t",arr[i]);
	}
}
