#include <stdio.h>
#include <conio.h>

void main(){
    /*
    gcd = store gcd latest value
    i = store divider value
    */
    int n1, n2,lcm; 
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    //i <= n1 && i <= n2 check divider between twos
    lcm = n1 > n2 ? n1 : n2;
    while(1){
        if(minMultiple % n1 == 0 && minMultiple % n2 == 0){
            printf("%d\n", lcm);
            break;
        }
        ++lcm;

    }
    printf("lcm of %d and %d is = %d",n1,n2,lcm);

}
