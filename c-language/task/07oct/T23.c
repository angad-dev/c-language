/*
A A A A A
B B B B B
C C C C C
D D D D D

*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%c",64+i);
		}
		printf("\n");
	}
}
