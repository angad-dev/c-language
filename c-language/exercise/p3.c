#include<stdio.h>
void main()
{
	int n,i,prime=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			prime=0;
			break;
		}
		if(prime==0)
		{
			printf("Prime number");
		}
		else
		{
			printf("not");
		}
	}
}
