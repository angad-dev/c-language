/*wap to count of positive number 
and negative number and zero in the given list of n number
*/
#include<stdio.h>
void main()
{
	int a[100],n,i,countp,countn,countz;
	printf("Enter the number to count :");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]>0)
		{
			countp++;
		}
		else if(a[i]<0)
		{
			countn++;
		}
		else
		{
			countz++;
		}
	}
	printf("Total positive number is %d",countp++);
	printf("\nTotal negative number is %d",countn++);
	printf("\nTotal zero number is %d",countz++);
}
