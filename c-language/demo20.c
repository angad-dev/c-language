//wap to ckeck larger number within two number by using ternary operator

#include<stdio.h>
void main()
{
	int n1,n2;
	printf("Enter the number : ");
	scanf("%d%d",&n1,&n2);
	n2<n1? printf("First value is greater"):printf("Second value is greater");
}
