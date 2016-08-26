#include <stdio.h>
#include <conio.h>

void main(){
	/*
	num = how many fibonacci  need
	sum = sum of privious and current number
	i = store individual number
	n1 = Store Ist number
	n2 = Store 2nd number
	*/
	int n1 = 0,n2 = 1,sum,i,num;
	printf("How many fibonacci  need ? ");  
    scanf("%d",&num); 
    //printing first two fibonacci
	printf("\n%d %d",n1,n2);
	//loop starts from 2 because 0 and 1 are already printed   
	for(i=2;i<num;i++){
		sum = n1 + n2;
		printf(" %d",sum);
		// regenerate previous number before disply numer
		n1 = n2;
		n2 = sum; 
	}

}
