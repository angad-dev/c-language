//wap to find area of circle by using udf
#include<stdio.h>
void area(int radius)
{
	float area;
	area=3.14*radius*radius;
	printf("area of circle = %f",area);
}
void main()
{
	int r;
	printf("enter radius of circle : ");
	scanf("%d",&r);
	area(r);
}
