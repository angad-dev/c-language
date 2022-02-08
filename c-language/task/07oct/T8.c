/*
5152535455
4142434445
3132333435
2122232425
1112131415
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d",i);
			printf("%d",j);
		}
		printf("\n");
	}
}
