#include<stdio.h>
void main()
{
	char arr[100];
	
	int i,digits=0,symbol=0,alphabet=0;
	printf("Enter the digits:");
	gets(digits);
	printf("Enter the symbol");
	gets(symbol);
	printf("Enter the alphabet:");
	gets(alphabet);
	if(i>=0 && i<=100)
	{
		digits++;
	}
	else if(i>='A' && i<='Z' || i>='a' && i<='z')
	{
		alphabet++;
	}
	else
	{
		symbol++;
	}
	printf("%d%d%d",digits,alphabet,symbol);
}
