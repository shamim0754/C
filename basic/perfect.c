#include <stdio.h>
#include <conio.h>

void main(){
	/*
	n = store number that needs to check perfect
	sum = store summation result
	i = store individual value
	*/
	int n,i=1,sum=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<n){
       if(n%i==0)
           sum=sum+i;
      i++;
  	}
    if(sum == n)
      printf("%d is a perfect number",n);
  	else
      printf("%d is not a perfect number",n);
}

	