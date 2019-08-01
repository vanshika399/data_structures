#include<stdio.h>
#include<string.h>
int main(void)
{       
	char str[50];
	int flag=0;
	printf("Enter a string:");
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{   printf("%c",str[i]);
		printf("%c\n",str[len-i-1]);
		if(str[i]!=str[len-i-1])
		{
			flag=1;
	                break;
		}
	}
	if(flag)
		printf("It is not a palindrome.");
	else
		printf("It is a palindrome.");
return 0;
}
