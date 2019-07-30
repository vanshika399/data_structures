#include<stdio.h>
int findMin(int arr[],int low,int high){
	if(high<low)
		return -1;
	if(high==low)
		return arr[low];
	int mid=low+(high-low)/2;
	if(mid<high && arr[mid+1]>arr[mid])
		return arr[mid];
	if(mid>low && arr[mid]<arr[mid-1])
		return arr[mid];
	if(arr[high]>arr[mid])
		return findMin(arr,low,mid-1);
	return findMin(arr,mid+1,high);
}
int main(void)
{
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int low=0,high=size-1;
	int x=findMin(arr,low,high);
        printf("%d",x);
}
