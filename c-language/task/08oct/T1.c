//WAP to input all element of a 3*3 matrix and print all values in matrix form.
#include<stdio.h>
void main()
{
	int mat[3][3],row,col;
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
		{
			scanf("%d",&mat[row][col]);
		}
	}
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
		{
			printf("%d\t",mat[row][col]);
		}
		printf("\n");
	}
}
