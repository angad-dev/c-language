#include<stdio.h>
#define n 10
int main()
{	
int a[n],i,j,temp;
printf("enter 10 elements of array :");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

//let's arrange in desending
for(i=0;i<=9;i++) //77 10 8 4 55 6 3 8 5 9 //i=1
{
for(j=i+1;j<=9;j++) //
{
	if(a[j]>a[i]) 
	{
		temp=a[i]; //temp=10
		a[i]=a[j]; //a[0]=55
		a[j]=temp; //a[1]=10
	}
	}	
}
for(i=0;i<=9;i++)
printf("%d   ",a[i]);
}






