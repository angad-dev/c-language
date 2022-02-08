//Write a program to find maximum in the given three numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the number to print greater :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is greater");
	}
	else if(b>c && b>a)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
}
