#include<stdio.h>
#include<string.h>
void reverse(char str[],int begin,int end)
{
	char c;
	if(begin>=end)
		return;
	c=str[begin];
	str[begin]=str[end];
	str[end]=c;

	reverse(str,++begin,--end);
}
int main()
{
	char str[100];
	int begin,end;
	printf("Enter a string:");
	gets(str);
	int len=strlen(str);
	begin=0,end=len-1;
	reverse(str,begin,end);
	printf("Reverse:%s",str);
	return 0;
}
