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
	int a[10][10],b[10][10],mul[10][10],r,c;
	int i,j,k;
	printf("enter the number of row=");  
    scanf("%d",&r);

    printf("enter the number of column=");  
    scanf("%d",&c); 

    //creat a create
    for(i=0;i<r;i++)
    	for(j = 0; j < c; j++)
    		scanf("%d",&a[i][j]); 

    // create b matrix		  
	for(i=0;i<r;i++)
    	for(j = 0; j < c; j++)
    		scanf("%d",&b[i][j]);

    //mutipley		  
    for(i=0;i<r;i++)
    	for(j = 0; j < c; j++)
    		for(k = 0; k < c; k++)	
    			mul[i][j] += a[i][k] * b[k][j];

    //print result
    for(i=0;i<r;i++)
    	for(j = 0; j < c; j++)
    		printf("%d\t",mul[i][j]);
    	//printf("\n");
    

}

	