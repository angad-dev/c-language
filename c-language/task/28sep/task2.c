//WAP to ask to input gender first character (m/f) 
//from 10 users and count how many female 
//and how many males are present here
#include<stdio.h>
void main()
{
	char gen,i,count1=0,count2=0,f,m;
	//printf("Enter gender (M/m or F/f): ");

    for(i=1;i<=10;i++)
    {
    	//scanf("%c",&gen);
    	if(i==f)
    	count1=i+count1;
    	count1++;
    	if(i==m)
    	count2++;
	}
	printf("total female is %c \n total male is %c",count1,count2);
}
