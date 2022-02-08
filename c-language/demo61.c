//find sum of value in loop
//WAP to find sum of all value within 1 to 10
#include<stdio.h>
void main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+i;//0+1=1+2=3+3=6+4=10
		if(i!=10)
		printf("%d+",i);
		else
		printf("%d",i);
	}
	printf("=%d",sum);
}
