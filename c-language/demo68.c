//WAP to count how many numbers are totaly divisible by 3 and 
//how many from 5 within 1 to 50
#include<stdio.h>
void main()
{
	int i,n,count1=0,count2=0;
	for(i=1;i<=50;i++)
	{
		if(i%3==0)
		count1++;
		//printf("\n%d",count1);
		if(i%5==0)
		count2++;
	}
	printf("\ndivisible is 3= %d and divisible is 5= %d",count1,count2);
}
