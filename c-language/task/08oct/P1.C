//
#include<stdio.h>
int main()
{
	int a[10],i,g=0;
	printf("enter 10 elements of array : ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]); //2 6 7 8 9 5 4 6 7 8 , g=0  
	}
	g=a[0];
	for(i=1;i<=9;i++) //i=9
	{
	if(a[i]>g) //2>0 ,6>2 ,7>6 ,8>7 ,9>8 ,5>9, 4>9,6>9 , 7>9,8>9
	g=a[i];	 //g=2 , g=6 , g=7 , g=8 , g=9
	}
	printf("greatest = %d",g);
}





