#include<stdio.h>
#define add(x,y) printf("%d",(x+y))
void main()
{
	int a,b;
	printf("Enter thye numkber : ");
	scanf("%d%d",&a,&b);
	add(a,b);
	printf("\n%s",__DATE__);
	printf("\n%s",__TIME__);
}
