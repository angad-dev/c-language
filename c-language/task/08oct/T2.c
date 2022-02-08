//wap to input 3*3 matrix and print "this is acceptable" only 
//if all element of matrix is o
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
			if(mat[row][col]==0)
			{
				printf("this is acceptable");
			}
			//printf("%d\t",mat[row][col]);
		}
		printf("\n");
	}
	
}
