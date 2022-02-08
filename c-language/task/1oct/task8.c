//wap to input number and print factorial of numbers until user input 0 or 1
#include<stdio.h>
void main()
{
	int n,i,fact=1;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	{
		fact=fact*i;
		//if(n==0 && n==0)
		//break;
	}
	printf("Fctorial of number %d is %d ",n,fact);
}
