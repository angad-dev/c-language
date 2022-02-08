 //wap to find all prime number from 1 to 50
 #include<stdio.h>
 void main()
 {
 	int i,num,count;
 	for(num=2;num<=50;num++)
 	{
 		count=0;
 	for(i=1;i<=num;i++)
 	{
 		if(num%i==0)
		count++;
	 }
	 if(count==2)
	 {
	 	printf("%d is a prime\n",num);
	 }
}
	 
 }
