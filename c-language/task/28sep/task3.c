//WAP to read 10 number from keyboard and count number 
//of positive , negative , zeros are present here
#include<stdio.h>
void main()
{
	int i,neg=0,p=0,z=0;
	printf("Enter 10 value :");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&n);
		
		if(n>0)
		p=p+1;
		
		else if(n<0)
		neg++;
		
		else if(n==o)
		z++
	}
	printf("total pos %d neg %d zer %d",p,neg,z);
}
