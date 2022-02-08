//loop without initialization
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the number to print :");
	scanf("%d",&n);
	for(i=n; i<=20; i++)
	{
		printf("\n%d",i);
	}
}
