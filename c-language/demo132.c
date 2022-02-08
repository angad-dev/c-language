//wap of swapping by using call by referencc type udf
#include<stdio.h>
void swap(int *ptr1,int *ptr2)
{
	int temp;
	*ptr1=temp;
	*ptr2=*ptr1;
	*ptr2=temp;
}
void main()
{
	int a,b;
	printf("Enter two value :");
	scanf("%d%d",&a,&b);
	printf("before swapping , a=%d and b=%d",a,b);
	swap(&a,&b);
	printf("\nafter swapping ,a=%d , b=%d",a,b);
}
