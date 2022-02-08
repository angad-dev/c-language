//wap to input 10 element and arrange value in descending order.
#include<stdio.h>
void main()
{
	int arr[10],i,j,a;
	for(i=0;i<=9;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(arr[i]<arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
		printf("The descending order is:\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\n",arr[i]);
	}
}
