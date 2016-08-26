#include <stdio.h>
#include <conio.h>

void main(){
	/*
	n = store number that needs convert binary
	binary = store binary result
	r = store reminder
	dividend = store division result 
	*/
	int n,binary=0,r,dividend;

    printf("Enter a number to convert binary ? ");  
	scanf("%d",&n);
	//get initial dividend
	dividend = n;

	//until dividend greater than 0
    while(dividend>0)  { 
    	//reminder 
		r=dividend%2;
		//generate reverse  
		binary=(binary*10)+r; 
		//division result 
		dividend=dividend/2;  
	}
	printf("%d binary = %d \n",n,binary );
}
