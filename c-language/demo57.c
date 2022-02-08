//WAP to print following statement
//8,12,17,23,30,38
//7,10,15,22,31,42
//12,11,9,6,2
#include<stdio.h>
void main()
{
	int i,n=3;
	for(i=8; i<=38; i+=n)
	{
		printf("%d\n",i);
		n=n+1;
	}
}
