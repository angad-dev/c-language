/*WAP to find the sum and count of even and odd number 
in the given list of n number*/
#include<stdio.h>
void main()
{
	int a[100],i,n,sum=0,counte,counto;
	printf("Enter the number count odd and even :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
		if(a[i]%2==0)
		{
			counte++;
			
		}
		else//(a[i]%2!=0)
		{
			counto++;
		}
	}
	printf("\ntotal even is %d",counte++);
	printf("\ntotal odd  is %d",counto++);
	printf("\ntotal sum is %d",sum);
}
