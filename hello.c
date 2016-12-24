#include <stdio.h>
#include <conio.h>
struct employee  {   
    int id;  
    char name[50];  
    float salary;  
};
void main(){
    struct employee e1; 
    e1.id=101; // or e1->id=101
    strcpy(e1.name, "Sonoo Jaiswal");
    e1.salary=25000;
    printf( "employee id : %d\n", e1.id);  
    printf( "employee name : %s\n", e1.name);        
    printf( "employee salary : %f\n", e1.salary);        
}
