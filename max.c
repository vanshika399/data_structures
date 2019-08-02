#include<stdio.h>
#include<string.h>
int main()
{
	char str[500];
	int count[500]={0};
	printf("Enter a string:");
	gets(str);
	int max=0;
	char result;
	int length=strlen(str);
	for(int i=0;i<length;i++)
	{    count[str[i]]++;
	
		if(count[str[i]]>max)
		{
			max=count[str[i]];
		        result=str[i];
                }
	}
	printf("Maximum occuring character:%c",result);
return 0;
}
