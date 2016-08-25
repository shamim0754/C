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

}

	