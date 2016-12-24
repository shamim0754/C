#include <stdio.h>
#include <conio.h>

void main(){
   FILE *fp; 
   //opening file 
   fp = fopen("file.txt", "w");
   //writing data into file  
   fprintf(fp, "file handling \n"); 
   //closing file  
   fclose(fp);   

}
