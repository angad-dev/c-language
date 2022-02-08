//WAP to ask 5 value from user and print only odd value
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter the 5 value :");
	for(i=1;i<=5;i=i+1)
	{
		scanf("%d",&n);
		if(n%2==1)
		{
			printf("%d the odd value\n",n);
		}
		
	}
	
}

