#include<stdio.h>
int binarysearchiterative(int arr[],int n,int key){
	int low = 0,high = n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(key<arr[mid]){
			high = mid-1;
		}
		else if(key>arr[mid]){
			low = mid+1;
		}
		else{
			return mid;
	}
	}
	return -1;
}
int main(){
	int n,key,result,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter array elements(sorted):");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter key to search:");
	scanf("%d",&key);
	result = binarysearchiterative(arr,n,key);
	if(result != -1){
		printf("Element found at index %d",result);
	}
	else{
		printf("Element not found");
	}
	return 0;
}
