#include <stdio.h>
#include <conio.h>

void main(){
	/*
	n = store number that needs to check palindrome
	reverse = store reverse result
	r = store reminder
	dividend = store division result 
	*/
	int n,reverse=0,r,dividend;

    printf("Enter a number to check palindrome ? ");  
	scanf("%d",&n);
	//get initial dividend
	dividend = n;

	//until dividend greater than 0
    while(dividend>0)  { 
    	//reminder 
		r=dividend%10;
		//generate reverse  
		reverse=(reverse*10)+r; 
		//division result 
		dividend=dividend/10;  
	}  
	if(n == reverse)  
		printf("%d is a palindrome number " , n);  
	else  
		printf("%d is not a palindrome number " , n);  

}

	