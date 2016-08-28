#include <stdio.h>
#include <conio.h>

void main(){
	/*
	a = store 1st Matrix
	b = store 2st Matrix
	m = store Multiply Matrix result
	r = no of row
	c = no of column
	i,j,k = array index store
	*/
	int a[10][10],r,c;
	float determinant=0;
	int i,j,k;
	printf("enter the number of row=");  
    scanf("%d",&r);

    printf("enter the number of column=");  
    scanf("%d",&c); 

    //create a matrix
    for(i=0;i<r;i++)
    	for(j = 0; j < c; j++)
    		scanf("%d",&a[i][j]); 



    for(i=0;i<r;i++)	
    	determinan += a[i][i] * a[i+1][(i+1)%r] * a[i+2][(i+2)%r] - a[i+1][(i+2)%r]*a[2][(i+1)%r]));

    //print result
    for(i=0;i<r;i++)
    	for(j = 0; j < c; j++)
    		printf("%d\t",mul[i][j]);
    	//printf("\n");
    

}

	