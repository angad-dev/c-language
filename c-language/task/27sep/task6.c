//1,2,4,7,11,16,22,………n
#include<stdio.h>
void main()
{
	int i,n,m=0;
	printf("Enter the number :");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+m)
	{
		m=m+1;
		printf("\n%d",i);
	}
}
