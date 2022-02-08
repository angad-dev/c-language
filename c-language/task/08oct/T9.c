/*WAP to find sum of positive number and sum of negative number 
in the given list of n number*/
#include<stdio.h>
void main()
{
	int a[100],i,n,sum=0,sumn=0;
	printf("Enter the number to sum:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]>=0)
		{
			
			sum=sum+a[i];
		}
		if(a[i]<0)
		{
			
			sumn=sumn+a[i];
		}
	}
	printf("total positive sum is:%d",sum);
	printf("\ntotal negative sum is:%d",sumn);
}
