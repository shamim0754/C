#include <stdio.h>
#include <conio.h>

void main(){
    /*
    lcm = store lcm  value
    */
    int n1, n2,lcm; 
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    //lcm minimum(start) value get
    lcm = n1 > n2 ? n1 : n2;

    //create infinite loop.do'nt worry we break it soon
    while(1){

        if(lcm % n1 == 0 && lcm % n2 == 0){
            printf("lcm of %d and %d is = %d",n1,n2,lcm);
            break;
        }
        ++lcm; // increment lcm value by 1

    }
    

}
