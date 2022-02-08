/*
66666
555
4
*/
#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=6;i>=1;i--)
	{
		if(i==3)
		{
			break;
		}
		for(j=1;j<=n;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
		n=n-2;
	}
}
