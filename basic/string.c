#include <stdio.h>  
#include <conio.h>  
  
void main(){  
    char name[100];  
    puts("Enter your name: ");  
    gets(name); //reads string from user  
    printf("Your name is: ");  
    puts(name);  //displays string 
    int count = strlen(name);
    printf("%d\n", count); 
    getch();  
}  