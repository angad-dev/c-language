//call by reference , program of swapping
#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("value of a is %d and value of b is %d",a,b);
}
void main()
{
	swap(7,9);
}
