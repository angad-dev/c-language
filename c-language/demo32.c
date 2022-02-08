//you can declare a function as a macro
#include<stdio.h>
#define add(x,y) x+y
#define a 50
void main()
{
	int var;
	//var=a;
	var=add(50,20);
	printf("variable = %d",var);
	printf("\naddition = %f",add(5.7,6.8));
}
