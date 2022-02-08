#include<stdio.h>
void main()
{
	int i,n,mul=1;
	i=1;
	//printf("Enter the number :");
	scanf("%d",&n);
	while(i<=n)
	{
		rem=i%10;
		if(rem%2==0)
		mul=mul*i;
		i=i+1;
	}
}
