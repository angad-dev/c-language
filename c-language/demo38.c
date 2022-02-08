//wap program to print cube of number only is number is positive
#include<stdio.h>
void main()
{
	int a,cube;
	printf("Enter the number :");
	scanf("%d",&a);
	if(a>0)
	{
		int cube;
		cube=a*a*a;
		printf("The cube number is : %d",cube);
		
	}
}
