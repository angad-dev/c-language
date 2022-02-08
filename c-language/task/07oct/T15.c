/*
66666
5555
444
33
2
*/
#include<stdio.h>
void main()
{
	int i,j,n=6;
	for(i=6;i>=1;i--)
	{
		if(i==1)
			{
				break;
			}
		for(j=1;j<=n;j++)
		{
			
			printf("%d ",i);
		}
		printf("\n");
		n=n-1;
	}
}
