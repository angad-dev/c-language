//multyply value by loop
//wap to find multiplication of all number within 1 to 10 
#include<stdio.h>
void main()
{
	long int i,mul=1;
	for(i=1;i<=10;i=i+1)
	{
		mul=mul*i;
		
	}
	printf("multiplication of value is = %ld",mul);
}
