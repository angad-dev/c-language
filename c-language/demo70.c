//WAP to cheack a given nuber is a prime number is not prime
#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("Enter the number to cheack prim number :");
	scanf("%d",&n);
	if(n!=1)
	{
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	//printf("count =%d",count);
	if(count==2)
	printf("%d is a prime number",n);
	else
	printf("%d is not a prime number",n);
}
else if(n==1)
{
	printf("1 is the prime number");
}
}
