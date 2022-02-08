/*wap to delete an element from the array of n 
element for the specefied position*/

#include<stdio.h>
void main()
{
	int a[5],i,p ;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to delete which position");
	scanf("%d",&p);
	if(p>=4+1)
		printf("Delete is not possible");
	else
	{
		for(i=p-1;i<4-1;i++)
		a[i]=a[i+1];
		for(i=0;i<=4-1;i++)
			printf("%d\n",a[i]);
	}
}
