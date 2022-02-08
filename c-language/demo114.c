#include<stdio.h>
void add() //no return type and no passing argument
{
	int n1,n2;
	printf("Enter two number:");
	scanf("%d%d",&n1,&n2);
	printf("Result is=%d",n1+n2);
}
int add1() //return type no passing argument
{
	int n1,n2,res;
	printf("Enter two number:");
	scanf("%d%d",&n1,&n2);
	res=n1+n2;
	return res;
}
void add2(int a, int b)//no return with argument
{
	int res;
	res=a+b;
	printf("Addition is =%d",res);
}
int add3(int a,int b)//return type with passing argument
{
	int res;
	res=a+b;
	return res;
}
void main()
{
//	int r;
//	r=add1();
//	printf("Addition is=%d",r);
//add2(40,60);

printf("%d",add3(5,6));
}
