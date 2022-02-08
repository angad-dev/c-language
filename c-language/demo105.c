//wap with the udf to add two numbers
#include<stdio.h>
void add()
{
	int n1,n2;
	printf("Enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("result = %d",(n1+n2));
}
void main()
{
	add();//calling of UDF
}
