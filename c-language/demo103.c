//wap to input 5 subject marks of 3 subject and print marks of of only second 
#include<stdio.h>
void main()
{
	int marks[3][5],row,col,sum=0;
	for(row=0;row<=3;row++)
	{
		printf("Enter 5 subject marks %d:",row+1);
		for(col=0;col<=4;col++)
		scanf("%d",&marks[row][col]);
	}
	for(col=0;col<=4;col++)
	{
		sum=sum+marks[1][col];
	}
	printf("total marks of second student is =%d",sum);
}
