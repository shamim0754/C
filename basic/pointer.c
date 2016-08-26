#include <stdio.h>
#include <conio.h>

void main(){
	/*
	n = store array size
	*arr = pointer variable
	i = store array index 
	*/
	int i,n,*ptr;
	printf("Enter number of elements: ");  
    scanf("%d",&n); 

    //memory allocated using calloc at runtime 
    int *arr = (int *) malloc(sizeof(int*)*n);
    printf("size is %d\n", sizeof(arr));

    printf("Enter elements of array: ");  
    for(i=0;i<n;i++) 
    	 scanf("%d",&arr[i]);  

    //print array
    for(i=0;i<n;++i) 
    	printf("%d ", arr[i]);   

}
