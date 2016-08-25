#include <stdio.h>
#include <conio.h>

void main(){
	/*
	n = number that need check prime number
	isPrime = flag for prime number yes
	i = divided value
	*/
	int i,n,isPrime = 1;
	printf("enter a numebr");  
    scanf("%d",&n); 
	for(i = 2; i < n/2; i++){
		if(n % i == 0){
			isPrime = 0;
			break;
		}
	}
	if(isPrime == 1)
		printf("%d is a prime number\n",n );
	else
		printf("%d is not a prime number\n",n );

}
