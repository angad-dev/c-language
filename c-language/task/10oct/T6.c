//wap to print qube of a number by using udf
//void cube()
//void cube()
#include<stdio.h>
void cube(int n1,int n2,int n3)
{
	printf("Cube is = %d",n1*n2*n3);
}
void main()
{
	int n1,n2,n3;
	printf("enter the number :");
	scanf("%d%d%d",&n1,&n2,&n3);
	cube(n1,n2,n3);
}
