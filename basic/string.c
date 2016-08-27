#include <stdio.h>  
#include <conio.h>  
  
void main(){  
    char *name;  
    puts("Enter your name: ");  
    gets(name); //reads string from user  
    printf("Your name is: ");  
    puts(name);  //displays string  
    getch();  
}  