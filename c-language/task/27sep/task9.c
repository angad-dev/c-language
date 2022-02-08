//WAP to add all even number within n to 50
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=n;i<=50;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
}
