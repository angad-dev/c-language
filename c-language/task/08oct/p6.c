//wap to input 10 elements and add sequential two elements 
#include<stdio.h>
void main()
{
	int a[10],i,res[5],pos=0;
printf("enter 10 elements of array : ");
for(i=0;i<=9;i++)
{
	scanf("%d",&a[i]);
}

for(i=0;i<=9;i=i+2) 
{
	res[pos]=a[i]+a[i+1];
	pos++; 
}
printf("all addition results = ");
for(i=0;i<=4;i++)
{
	printf("%d\n",res[i]);
}
}









