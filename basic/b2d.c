#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){
	/*
	n = store number that needs convert decimal
	decimal = store decimal result
	r = store reminder
	dividend = store division result
	i = store power value 
	*/
	int n,decimal=0,r=0,i=0,temp;

    printf("Enter a binary to convert decimal ? ");  
	scanf("%d",&n);
	temp=n;

	//until dividend greater than 0
    while(n != 0)  { 
    	//reminder 
		r=n%10;
		//generate reverse  
		decimal += r * pow(2,i); 
		//division result 
		n = n/10;
		i++;  
	}
	printf("%d binary = %d \n",temp,decimal );
}
