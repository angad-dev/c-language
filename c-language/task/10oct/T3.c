//wap to find greatest number within two number by using udf
#include<stdio.h>
void greater()
{
	int n1,n2;
	printf("Enter the number : ");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	{
		printf("%d greatest number",n1);
	}
	if(n2>n1)
	{
		printf("%d greatest number ",n2);
	}
	
}
void main()
{
	greater();
}
