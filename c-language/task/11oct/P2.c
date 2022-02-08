////NCR =factorial of n/(factorial of r * factorial of (n-r))
#include<stdio.h>
void main()
{
	int n,r,factn,factr,factnrni;
	printf("Enter the value of n & r:");
	scanf("%d%d",&n,&r);
	for(i=1;i<=n;i++)
	{
		factn=factn*i;
	}
	printf("factorial of n =%d",factn);
	for(i=1;i<=r;i++)
	{
		factr=factr*i;
	}
	printf("factorial of n =%d",factr);
	for(i=1;i<=(n-r);i++)
	{
		factnr=factnr*i;
	}
	printf("factorial of n =%d",factnr);
	printf("\nFactorial of NCR %d",factn/(factr*factnr));
}
