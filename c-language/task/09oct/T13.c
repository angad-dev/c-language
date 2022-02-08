//wap to find sum of all element in  the given matrix of order in m*n.
#include<stdio.h>
void main()
{
	int mat[3][3],m,n,sum=0;
	for(m=0;m<=2;m++)
	{
		for(n=0;n<=2;n++)
		{
			scanf("%d",&mat[m][n]);
		}
	}
	for(m=0;m<=2;m++)
	{
		for(n=0;n<=2;n++)
		{
			printf("%d\t",mat[m][n]);
		}
		printf("\n");
	}
	printf("sum is =%d",sum);
	
}
