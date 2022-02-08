#include<stdio.h>
void main()
{
	int i;
	printf("Enter the value of i :");
	scanf("%d",&i);
	//i=i%2;
	//i=i%2? printf("odd") : printf("even");
	i%2==0? printf("Value is even") : printf("Value is odd");
	//printf("remender = %d",i);
}
