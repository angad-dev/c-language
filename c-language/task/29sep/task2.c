//wap to input a number and print sum of even digits and sum of odd digits 
#include<stdio.h>
void main()
{
	int i=1,n,oddsum=0,evensum=0;
	printf("Enter the number :");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		evensum=evensum+i;
		else
		oddsum=oddsum+i;
		i++;
	}
	printf("Evensum=%d",evensum);
	printf("Oddsum=%d",oddsum);
}
