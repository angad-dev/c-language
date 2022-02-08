//wap to store 5subject marks of a student and find total marks . by using array
#include<stdio.h>
void main()
{
	int i,marks[5],sum=0;
	printf("enter 5 subject marks :");
	//scanf("%d%d%d%d%d",&marks[0],&marks[1],&marks[2],&marks[3],&marks[4]);
	for(i=0;i<=4;i++)
	{
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
	}
	printf("sum is : %d",sum);
	//printf("Secound subject marks is :%d",marks[2]);
}
