//wap to input 10 element and check a given value is present in array or not
#include<stdio.h>
void main()
{
	int  arr[10],row,val;
	for(row=0;row<=9;row++)
	{
		scanf("%d",&arr[row]);
	}
	printf("Enter value to check present in array: ");
	scanf("%d",&val);
	for(row=0;row<=9;row++)
	{
		if(arr[row]==val)
		break;
	}
	if(arr[row]==0)
	{
		printf("%d not present in array",arr[row]);
	}
	else
	{
		printf("%d present in array",arr[row]);
	}
}
