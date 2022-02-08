//wap to find greatest number within 10 element of array.
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
		if(arr[0]<arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("Largest number is %d",arr[0]);
}
