//when ending of loop is not given
//wap to print even value 1 to n
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter ending of range :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		printf("%d\n",i);
	}
}
