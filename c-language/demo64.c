//WAP to find factorial
//5 to 1
#include<stdio.h>
void main()
{
	int i,mul=1,n;
	printf("Enter the number to find factorial:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	printf("Factorial is :%d",mul);
}
