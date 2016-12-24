#include <stdio.h>
#include <conio.h>
int add(int n1,int n2) {  
    return n1 + n2;
}  
void main(){
    int number=50;  
    int *p;   // pointer declare   
    p=&number;//stores the address of number variable  
          
    printf("Address of number variable is %x \n",&number);  
    printf("Address of p variable is %x \n",p);  
    printf("Value of p variable is %d \n",*p);   // pointer value
      
}
