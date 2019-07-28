#include<stdio.h>
int max_sum_subarray(int arr[],int size){
	int max_ending_here=0,max_so_far=0,st_index=0,en_index=-1;
        for(int i=0;i<size;i++)
	{
		max_ending_here+=arr[i];
		if(max_ending_here<0)
		{
			max_ending_here=0;
			st_index=i+1;
		}
		else if(max_so_far<max_ending_here)
		{
			max_so_far=max_ending_here;
			en_index=i;
		}
	}
	printf("Index of the subarray with largest sum: starting index-%d ending index- %d",st_index,en_index);
	return max_so_far;
}
int main(void)
{
	int size;
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	
        }
	int x=max_sum_subarray(arr,size);
	printf("Largest contiguous sum:%d",x);
}
