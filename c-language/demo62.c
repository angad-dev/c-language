
//WAP to print sum of all numbers between 1 to n 
//where number divide by 3 is equal to 2
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%3==2)
		sum=sum+i;
		//printf("\n%d",sum);
	}
	printf("\n%d",sum);
}
