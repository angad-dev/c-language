#include<stdio.h>
void main()
{
	int n=5;
	int a[n];
	int i=0;
	
	//Taking input in array
	for(i=0; i<n; i++){
		printf("Enter value %d : ",i+1);
		scanf("%d", &a[i]);
	}
	
	//printing given array
	printf("Array is : ");
	for(i=0; i<n; i++){
		printf("%3d", a[i]);
	}
	
	//unique value
	int b[n]; //empty array
	int m;
	int j;
	
	//filling 0 in empty array
	for(i=0; i<n; i++){
		b[i]=0;
	}
	
	int count=0;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[i]==b[j]){
				count=1;
			}
			
		}
		if(count==0){
			b[i]=a[i];
		}
	}
	
	//printing given array
	printf("\n");
	printf("Unique elements is : ");
	for(i=0; i<n; i++){
		printf("%3d", b[i]);
	}
	
	printf("\n");
	for(i=0; i<n; i++){
		if(a[i]!=0){
			printf("%3d", a[i]);
		}
	}
}
