#include <stdio.h>
#include <conio.h>

void main(){
	/*
	gcd = store gcd latest value
	i = store divider value
	*/
	int n1, n2, gcd,i; 
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    //i <= n1 && i <= n2 check divider between twos
    for(i = 1; i <= n1 && i <= n2; i++){
    	// divide numbers by divider
    	if(n1 % i == 0 && n2 % i == 0)
    		gcd = i; // store i as gcd
    }
    printf("gcd of %d and %d is = %d",n1,n2,gcd);

}

	