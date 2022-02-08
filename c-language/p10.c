#include<stdio.h>
void main()
{
	int rows,columns,k=1;
	printf("Enter the number to rows :");
	scanf("%d",&rows);
	printf("Enter the number to calculate columns :");
	scanf("%d",&columns);
	int a[rows][columns];
	int i=1;
	while(i<=rows)
	{
		int j=1;
		while(j<=columns)
		{
			printf("%d\t",k);
			k++;
			j++;
		}
		i++;
		printf("\n");
	}
}
