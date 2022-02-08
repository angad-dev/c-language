//wap to print all even number within a given series only if number is
//less then 100

#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter the starting the series :");
	scanf("%d",&i);
	//printf("Enter the ending of series :");
	//scanf("%d",&n);
	for( ; i<=100; i++)
	{
		if(i%2==0)
		printf("%d\n",i);
		count++;
	}
}
