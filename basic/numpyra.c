#include <stdio.h>
#include <conio.h>

void main(){
	/*
	n=pyramid row
	i = store individual value
	i,j,l,k = printing purpose
	*/
	int n,i,j,l,k;

	printf("Enter a number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){

		//space print
		for(j = 1; j <= n-i;j++)
			printf(" ");
		
		//number print
		for(k=1;k<=i;k++)  
			printf("%d",k);

		//number print decending
		for(l=i-1;l>=1;l--)
			printf("%d",l);

		//new line
		printf("\n");	 	  

	}  

}
