/*
55555
44444
33333
22222
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		if(i==1)
		{
			break;
		}
		for(j=1;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
