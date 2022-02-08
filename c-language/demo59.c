//7,10,15,22,31,42
#include<stdio.h>
void main()
{
	int i,n=1;
	for(i=7; i<=42; i=i+n)
	{
		printf("%d\n",i);
		n=n+2;
	}
}
