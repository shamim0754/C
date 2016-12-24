#include <stdio.h>
#include <conio.h>
int add(int n1,int n2) {  
    return n1 + n2;
}  
void main(){
    char fname[50],lname[50];  
    gets(fname);  
    gets(lname);  

    //strlen function usage
    printf("Length of your fname %d\n",strlen(fname)); 

    //strcpy function usage
    printf("Your last name %s\n",strcpy(fname,lname)); 

    //strcat function usage
    printf("Your full name %s\n",strcat(fname,lname));   

    //strcmp function usage
    if(strcmp(fname,lname)==0)  
      printf("fname and lname are equal");  
    else  
      printf("fname and lname are not equal");  

    //strrev function usage
    printf("Reverse of fname is : %s\n",strrev(fname));

    //strlwr function usage
    printf("Lower case of fname is : %s\n",strlwr(fname)); 

    //strupr function usage
    printf("Upper case of fname is : %s\n",strupr(fname));

    char *sub;
    sub = (char *)strstr("shamim miah shamim miah","miah");  //first occurrence till matched string 
    printf("\nSubstring is: %s",sub);      
}
