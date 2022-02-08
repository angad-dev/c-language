//wap in c to swap two value by using third variable
#include <stdio.h> 
int main()
{
int a,b, temp; 
printf("Enter two number");
scanf("%d%d", &a, &b);
printf("before swapping  first num is = %d and Second = %d",a,b);
temp = a;
a = b;
b = temp;
printf("\nAfter Swappingn First = %d Second is = %d",a,b);
}

