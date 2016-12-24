#include <stdio.h>
#include <conio.h>

struct Date  
{  
   int dd;  
   int mm;  
   int yyyy;   
};
struct employee  {   
    int id;  
    char name[50];  
    float salary; 
    struct Date joindate; 
    /*
    or
    struct joinDate  
    {  
      int dd;  
      int mm;  
      int yyyy;   
    }joindate;
    */   
};
void main(){
    struct employee e1; 
    e1.id=101; // or e1->id=101
    strcpy(e1.name, "Sonoo Jaiswal");
    e1.salary=25000;
    e1.joindate.dd=10;  
    e1.joindate.mm=11;  
    e1.joindate.yyyy=2014;
    printf( "employee id : %d\n", e1.id);  
    printf( "employee id : %d\n", e1.joindate.dd);  
    printf( "employee name : %s\n", e1.name);        
    printf( "employee salary : %f\n", e1.salary);  

}
