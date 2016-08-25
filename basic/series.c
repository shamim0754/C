#include <stdio.h>
#include <conio.h>

void main(){
	/*
	max = store maximum number of series
	sum = store summation result
	i = store individual value
	*/
	int max,i;
    int sum=0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&max);

    printf("Sum of the series: ");

    for(i =1;i <= max;i++){
         printf("%d ",i);
         if(i != max)
         	printf(" + ");
     	 sum += i;
     }
     printf(" = %d ",sum);
     
	/*
	temp = n; // temp need for final comparison

	while(n > 0 ){
		r = n % 2;
		sum = sum * 10 + r;
		//sum += r * r * r;
		n = n / 2; 
	}
	//if(temp == sum)
		printf("%d is a binary\n",sum );
	
	*/

}

	