#include<stdio.h>
#include<string.h>
int main(void)
{
	char first[50],second[50],temp[50];
	printf("Enter first string:");
	gets(first);
	printf("Enter second string:");
	gets(second);
	strcpy(temp,first);
	strcpy(first,second);
	strcpy(second,temp);
	printf("Strings after swapping:\nfirst:%s\nsecond:%s",first,second);
	return 0;
}
