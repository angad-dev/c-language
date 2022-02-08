//loop where we have to work on multiple user inputed value
//WAP to ask 5 value from user and print only odd value
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter 5 value :");
	for(i=1;i<=5;i=i+1)
	{
		scanf("%d",&n);
		if(n%2==1)
		{
			printf("%d is a odd number \n",n);
		}
	}
}
