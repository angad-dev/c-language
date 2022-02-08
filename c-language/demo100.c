//wap to input 10 element and find sum of all 
#include<stdio.h>
void main()
{
	int arr[10],i,sum=0;
	printf("Enter the number :");
	for(i=1;i<=9;i++)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	//for(i=1;i<=9;i++)
	//{
	//	sum=sum+arr[i];
	//}
	printf("Sum of all = %d",sum);
}
