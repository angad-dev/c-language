//WAP to input all element of a 3*3 matrix and print all values in matrix form.
#include<stdio.h>
void main()
{
	int mat[3][3],row,col,sum=0;
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
		{
			scanf("%d",&mat[row][col]);
			//row,col=00,01,02,10,11,12,20,21,22
		}
	}
	printf("the matrix is: \n");
	for(row=0;row<=2;row++)
	{
		for(col=0;col<=2;col++)
		{
			sum=sum+mat[row][col];
			printf("%d\t",mat[row][col]);
			
		}
		printf("\n");
	}
	printf("\n sum is %d",sum);
}
