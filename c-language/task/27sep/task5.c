//WAP to print all odd number from 10 to n
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the number of range :");
	scanf("%d",&n);
	for(i=10; i<=n; i++)
	{
		if(i%2==1)
		printf("%d\n",i);
	}
}
