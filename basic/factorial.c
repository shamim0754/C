#include <stdio.h>
#include <conio.h>

int factorial(int n){
	if(n < 0)
		return -1; //wrong input
	else if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
void main(){
	/*
	num = number that need find factorial
	fact = factorial result
	i = factorial multiple value
	*/
	int num,fact = 1,i; 
    printf("Enter a number \n");
	scanf("%d",&num);
	/*if(num == 0)
	else	
		for(i = num; i > 0; i--)
			fact = i * fact;
	*/
	//using recursive function
	fact = factorial(num);		
	printf("Factorial of !%d=%d",num,fact);

}

	