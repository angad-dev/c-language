//wap to input 10 element and search one value is present in array or not
#include<stdio.h>
void main()
{
	int arr[10],index,val;//temp=0
	printf("Enter the 10 element");
	for(index=1;index<=9;index++)
	{
		scanf("%d",&arr[index]);
	}
	printf("input a array of search in array");
	scanf("%d",&val);
	for(index=1;index<=9;index++)
	{
		if(arr[index]==val)
		break;
		//temp=1;
	}
	if(index==10)
	//if(temp==0)
	{
		printf("%d is not present",index);
	}
	else
	{
		printf("%d present in array",index);
	}
}
