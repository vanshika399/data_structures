#include<stdio.h>
_Bool findPair(int arr[],int n,int x)
{       int i;
	for( i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
			break;
	}
	int l=(i+1)%n;
	int r=i;
	while(l!=r)
	{
		if(arr[l]+arr[r]==x)
			return 1;
		else if(arr[l]+arr[r]<x)
			l=(l+1)%n;
		else
			r=(n+r-1)%n;
	}
	return 0;
}
int main(void)
{
	int n,x;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
        if(findPair(arr,n,x))
        	printf("There are two elements with sum = %d",x);
	else
	        printf("There are no two elements with sum = %d",x);
}

