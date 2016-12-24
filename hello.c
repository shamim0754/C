#include <stdio.h>
#include <conio.h>
int add(int n1,int n2) {  
    return n1 + n2;
}  
void main(){
    int num1,num2;
	printf("Enter two number for add : ");
    scanf("%d %d",&num1,&num2);
    printf("sum of %d and %d = %d",num1,num2,add(num1,num2));
    getch();    
}
