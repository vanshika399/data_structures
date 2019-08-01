#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],rev[100];
	int begin,end,len;
	printf("Enter a string:");
	gets(str);
	len=strlen(str);
	end=len-1;
	for(begin=0;begin<len;begin++)
	{
		rev[begin]=str[end];
		end--;
	}
	rev[begin]='\0';
	printf("Reverse:");
	printf("%s",rev);
	return 0;
}
