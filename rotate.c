#include<stdio.h>
#define rotations 1
#define R 4
#define C 4
int main(void)

{
	int arr[R][C]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	for(int i=0;i<rotations;i++)
	{
		rotate(R,C,arr);
	}
	return 0;
}
void rotate(int m,int n,int arr[R][C])
{       int rows=0,cols=0;
	while(rows<m &&  cols<n)
	{
		if(rows+1==m || cols+1==n)
			break;
		int prev=arr[rows+1][cols];
		for(int i=cols;i<n;i++)
		{
			int curr=arr[rows][i];
			arr[rows][i]=prev;
			prev=curr;
		}
		rows++;

		for(int i=rows;i<m;i++)
		{
		  int curr=arr[i][n-1];
	          arr[i][n-1]=prev;
	          prev=curr;
	        }
                n--;
                if(rows<m)
	        for(int i=n-1;i>=cols;i--)
                {
	           int curr=arr[m-1][i];
		   arr[m-1][i]=prev;
		   prev=curr;
		 }m--;
		if(cols<n)
			for(int i=m-1;i>=rows;i--)
			{
				int curr=arr[i][cols];
				arr[i][cols]=prev;
				prev=curr;
			}cols++;
	}
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}
	            		 
