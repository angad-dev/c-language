//wap with the udf to add two number (UDF should be return type and no passing 
//parameter
#include<stdio.h>
int addition()
{
	int a,b,res;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	res=a+b;
	return res;
}
void main()
{
//int a,b;
//printf("%d",scanf("%d%d",&a,&b));	
	printf("Addition=%d",addition());
}
