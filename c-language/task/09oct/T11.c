//WAP to search element in the given list of n number using 
//linear search
#include<stdio.h>
void main()
{
	int a[5],i,v;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search array : ");
	scanf("%d",&v);
	for(i=0;i<=4;i++)
	{
		if(a[i]==v)
		{
			printf("%d prasent in array",v);
		}
	}
}
