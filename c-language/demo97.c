/*
1 2 3 4 5
1 2 3 4 
1 2 3
1 2 
1
*/
#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
		n=n-1;
	}
}
