#include <stdio.h>
#include <conio.h>

void main(){
	/*
	n = store number that needs convert decimal
	decimal = store decimal result
	r = store reminder
	dividend = store division result
	i = store power value 
	*/
	int n,decimal=0,r,dividend,i;

    printf("Enter a binary to convert decimal ? ");  
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
