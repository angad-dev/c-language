#include<stdio.h>
void main()
{
	int arr[10]={2,4,1,5,6,9,8,3,10,7};
	int i=1,j=3,k=2;
	printf("%d",arr[0]);
	printf("%d",arr[3]);
	printf("%d",arr[9]);
	printf("%d",arr[i*j+k]);
	printf("%d",arr[10-5]);
	printf("%d",arr[10-1]);
}
