//wap to print last element of array by using UDF
#include<stdio.h>
void lastElement(int a[])
{
	printf("The last array is %d",a[9]);
}
void main()
{
	int a[10],i,b;
	printf("Enter the 10 number:");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	lastElement(a);
	
}
