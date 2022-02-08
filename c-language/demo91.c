 //wap to find table of all numbers from  2 to 10
 //wap to find all prime number from 1 to 50
 //wap to inpit 5 digit from user and count how many digits of are polindrome
 //wap to count all prime numbers within 1 to given number
 //wap to input 5 subject marks of 3 student and print division of all
 
 #include<stdio.h>
 void main()
 {
 	int i,j,table;
 	for(i=2;i<=10;i++)
 	{
 		for(j=1;j<=10;j++)
 		{
 			
 			table=i*j;
 			printf("%d\t",table);
		 }
		 printf("\n");
	 }
 }
