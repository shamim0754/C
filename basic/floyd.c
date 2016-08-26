#include <stdio.h>
#include <conio.h>

void main(){
	/*
	n = store rows for floyd
	i,j = store ierator
	k = store display number
	*/
	int n, i,j,k=1; 
    printf("Enter rows for floyd : ");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++){
    	for(j=1;j<=i;j++)
    		printf(" %d",k++);
    	printf("\n");
    }
	getch();
}

	