//WAP to read 5 value from user and count total positive and negative 
//numer present
#include<stdio.h>
void main()
{
	int i,n,neg=0,p=0;
	printf("Enter the 5 value :");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);
		if(n>0)
		p=p+1;
		
		else if(n<0)
		neg++;
	}
	printf("Total positive is %d and total negative is %d",p,neg);
}
