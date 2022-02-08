#include<stdio.h>
void main()
{
	int n,temp,r,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Polindrome");
	}
	else
	{
		printf("Not polindrome");
	}
}
