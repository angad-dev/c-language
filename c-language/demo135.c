#include<stdio.h>
void main()
{
	int res,val;
	printf("ENter the value :");
	scanf("%d",&val);
	res=getfact(val);
	printf("factorial is %d",res);
}
int getfact(int n)
{
	if(n==1)
	return 1;
	else
	return n*getfact(n-1);
}
