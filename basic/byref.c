#include <stdio.h>
void passref(int *a){
	*a += 2;
}
void passval(int a){
	a += 2;
}
int main(){
    int a=5;
    passval(a);
    printf("pass value : %d\ln",a);

    passref(&a);
    printf("Pass ref : %d",a);
    return 0;
} 
