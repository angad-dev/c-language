/*wap to input 10 element of array and check a given of
 value is how many
 times present in array and on which position */
 #include<stdio.h>
void main()
{
int a[10],i, v,count=0;
printf("enter 10 elements of array : ");
for(i=0;i<=9;i++)
scanf("%d",&a[i]);

//let's take another value to serach in array
printf("enter a number to search in array : ");
scanf("%d",&v);
//lets compare value to the each index of array
printf("value is present at : ");
for(i=0;i<=9;i++)
{
	if(a[i]==v)
	{
		printf("%d ,",i+1);
		count++;
	}
}
printf(" position in array ");
printf("\n total %d time %d present in array ",count,v);

}
