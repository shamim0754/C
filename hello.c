#include <stdio.h>
#include <conio.h>

void main(){
   FILE *fp; 
   char buff[255];
   //opening file 
   fp = fopen("file.txt", "r");
   //reading data into file  
   while(fscanf(fp, "%s", buff)!=EOF)  
      printf("%s ", buff );  
     
   //closing file  
   fclose(fp);   

}
