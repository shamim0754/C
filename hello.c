#include <stdio.h>
#include <conio.h>
int add(int n1,int n2) {  
    return n1 + n2;
}  
void main(){
    int i,n,*ptr;  
    printf("Enter number of elements");
    scanf("%d",&n);
    int *arr = (int *) malloc(sizeof(int *) * n);
    printf("size is %d\n",sizeof(arr));
    printf("Enter elements of array :");
    for(i = 0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        printf("%d", arr[i]);          
}
