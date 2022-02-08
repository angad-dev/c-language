//wap to find smallest number within 10 elements.
#include<stdio.h>
void main()
{
	int arr[10],i;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		if(arr[0]>arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("Smallest number is %d",arr[0]);
}
