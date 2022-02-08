//WAP to print sum of all number 
//where number is not divisible by 3 within 1 to n 
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter a last series of number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3!=0)
		sum=sum+i;
		//printf("\n%d",sum);
	}
	printf("\n%d",sum);
}
