#include<stdio.h>
int bin_search(int arr[],int first,int last,int search)
{
   if(first>last)
           return -1;
   int mid=(first+last)/2;
   if(arr[mid]==search)
           return mid;
   if(arr[first]<=arr[mid])
   {
           if(search>=arr[first] && search<=arr[mid])
                   return bin_search(arr,first,mid-1,search);
           return bin_search(arr,mid+1,last,search);
  }
            if(search>=arr[mid] && search<=arr[last])
                   return bin_search(arr,first,mid-1,search);
           return  bin_search(arr,mid+1,last,search);

}
int main()
{       int size,search;
        printf("Enter the size of array:");
        scanf("%d",&size);
        int arr[size];
        printf("Enter the sorted rotated array:");
        for(int i=0;i<size;i++)
        {
scanf("%d",&arr[i]);
        }
        printf("Enter the element to be searched:");
        scanf("%d",&search);
        int first=0,last=size-1;
        int x=bin_search(arr,first,last,search);
        printf("%d",x);
        return 0;
}

