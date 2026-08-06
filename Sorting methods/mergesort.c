#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int low,int mid,int high){
	int i = low,j = mid+1,k=0;
	int size = high - low +1;
	int b[size];
	//merge the two halfs
	while(i<=mid&&j<=high){
		if(a[i]<=a[j]){
			b[k++] = a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	//copy remaining elemnts to left half 
	while (i<=mid){
		b[k++] = a[i++];
	}
	//copy remiaing elements to right half
	while(j<=high){
		b[k++]=a[j++];
	}
	//copy merged elements back to Original array
	for(i=0;i<size;i++){
		a[low+i]=b[i];
	}
}
//merge sort function
void mergesort(int a[],int low,int high){
	
	if(low<high){
	int mid = (low+high)/2;
	// sort left and right halves
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	//merge sorted halves
	merge(a,low,mid,high);
}
}
int main(){
	int n;
	printf("Enter number of elements");
	scanf("%d",&n);
	int a[n],i;
	printf("Enter elements:");
	for(i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("Sorted array:\n");
	for(i = 0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
