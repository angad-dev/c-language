//wap to arrange element of array in ascending order
//Void arrangeArray(int arr[])
#include<stdio.h>
void arrangeArray(int arr[])
{
	int n,i,b,j;
	printf("Enter the array :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=j+1;j<=n;j++)
		{
			if(arr[i]>arr[j])
			{
				b=arr[i];
				arr[i]=arr[j];
				arr[j]=b;
			}
		}
	}
	for(i=0;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void main()
{
	arrangeArray(i);
}
