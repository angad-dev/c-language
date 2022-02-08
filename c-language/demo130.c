#include<stdio.h>
void main()
{
	int a=5;
	int *ptr;
	ptr=&a;
	printf("value of is : %d",a);
	ptr=*ptr+10;
	printf("value of ptr is %d",ptr);
}
