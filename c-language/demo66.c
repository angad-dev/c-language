//
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		count++;
	}
	printf("total value devided by 3 is :  %d",count);
}
