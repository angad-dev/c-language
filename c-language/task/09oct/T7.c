//WAP to find maximum and minimum number to given n number
#include<stdio.h>
void main()
{
	int arr[100],mx,mn,i,n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mx=arr[0];
	mn=arr[0];
	for(i=0;i<=n;i++)
	{
		if(arr[i]>mx)
		{
			mx=arr[i];
		}
		if(arr[i]<mn)
		{
			mn=arr[i];
		}
	}
	printf("Max value is :%d",mx);
	printf("\nMin Value is :%d",mn);
}
