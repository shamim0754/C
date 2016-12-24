#include <stdio.h>
#include <conio.h>
struct employee  {   
    int id;  
    char name[50];  
    float salary;  
};
void main(){
    struct employee emp[2]; 
    int i;
    for(i = 0;i < 2;i++){
        scanf("%d",&emp[i].id);
        scanf("%s",&emp[i].name);
        scanf("%f",&emp[i].salary);
    }

    //print
    for(i = 0;i < 2;i++){
        printf("%d",emp[i].id);
        printf("%s",emp[i].name);
        printf("%f\ln",emp[i].salary);
    }

}
