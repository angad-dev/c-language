//wap to input a number and print only odd digits of number
#include<stdio.h>
void main()
{
	int num=1,n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	printf("Odd Numbers from 1 to %d:\n",n);
	while(num<=n)
	{
		if(num%2 != 0)
			printf("%d ",num);
		num++;
}
//printf("oddsum=%d",np);
}
