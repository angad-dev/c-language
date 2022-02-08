//WAP to count all even number within a series
//Void series()
//Void series(int start , int end)
#include<stdio.h>
void series()
{
	int i,a[5],count=0;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		if(a[i]%2==0)
		count++;
	}
	printf("count of even is =%d",count);
}
void main()
{
	series();
}
