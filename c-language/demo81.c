//wap to print only max 4 even number within a given series.
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter starting a series : ");
	scanf("%d",&i);
	printf("Enter the ending of series :");
	scanf("%d",&n);
	for( ; i<=n; i++)
	{
		if(i%2==0)
		{
		printf("%d\n",i);
		count++;
	}
		if(count==4)
		break;
	}
}
