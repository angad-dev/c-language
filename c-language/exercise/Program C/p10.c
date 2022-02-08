#include<stdio.h>
#define add(x,y) printf("addition is : %d",(x+y))/ printf("\nsubstract is : %d",(x-y)) / printf("\nmultiply is : %d",(x*y)) / printf("\ndevide is : %d",(x/y))
void main()
{
	int a,b;
	printf("Enter the two value : ");
	scanf("%d%d",&a,&b);
	add(a,b);
	printf("\nCorrent date is : %s",__DATE__);//there is pre defined macro
	printf("\nCorrent time is : %s",__TIME__);
}

