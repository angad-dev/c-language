//1.Wap to find table of all numbers from 2 to 10.
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=2;j<=10;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
}
