### HelloWorld ###
```C
#include <stdio.h>
#include <conio.h>

void main(){
    printf("Hello world");
    getch();    
}

```

### Bubble Sort ###
```C
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	int n,a[20],i,j,temp;

    printf("Enter total numbers of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    // take value from user
    for(i = 0; i < n; i++){
      scanf("%d",&a[i]);
    }
    printf("Before sort : [ ");
    // input array value
    for(i = 0; i < n; i++){
      printf("%d ",a[i]);
    }
    printf("]");
    // input array value
    for(i = 0; i < n; i++){ //number of iternation need for bubble up
    	 for(j = 0; j < n-i; j++){ //n-i for performance you can use n
    	 	/*
    	 	for decending order : pickup greater value for bubble up
    	 	for accending order : pickup smaller value for bubble up then use <
    	 	*/
    	 	if(a[j] > a[j+1]){
    	 		temp = a[j]; // for swaping purpose
    	 		a[j] = a[j+1]; // bubble up
    	 		a[j+1] = temp; // swap
    	 	}
    	 }
    }
    printf("After sort : [ ");
    for(i = 0; i < n; i++){
      printf("%d ",a[i]);
    }
    printf("]");
}
```
### Merge Sort ###
 [Alogrithm](http://www.tutorialspoint.com/data_structures_algorithms/merge_sort_algorithm.htm).

### Leap Year ###
 ```C
 #include <stdio.h>
#include <conio.h>

void main(){
    int y;

    printf("Enter a year");
    scanf("%d",&y);

    //if divible by 400
    if(y % 400 == 0)
        printf("%d is a leap year", y);
    //if divible by 100
    else if(y % 100 == 0)
        printf("%d is a not leap year", y);

    ////if divible by 4
    else if (y % 4 == 0)
        printf("%d is a leap year", y);
    else
        printf("%d is a not leap year", y);

}
```
### GCD(Greatest Common Divisor)/HCF ###
6 divisor = 1,2,3,6 and 10 divisor = 1,2,5,10 <br>
CD = 1,2<br>
GCD = 2

```C
#include <stdio.h>
#include <conio.h>

void main(){
    /*
    gcd = store gcd latest value
    i = store divider value
    */
    int n1, n2, gcd,i; 
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    //i <= n1 && i <= n2 check divider between twos
    for(i = 1; i <= n1 && i <= n2; i++){
        // divide numbers by divider
        if(n1 % i == 0 && n2 % i == 0)
            gcd = i; // store i as gcd
    }
    printf("gcd of %d and %d is = %d",n1,n2,gcd);

}
```
### LCM(Lowest Common Multiple) ###

| Mutiple of 5 | Mutiple of 8 |
| --- | --- |
| 5 x 1 = 5 | 8 x 1 = 8|
| 5 x 2 = 10 | 8 x 2 = 16|
| 5 x 3 = 15 | 8 x 3 = 24|
| 5 x 4 = 20 | 8 x 4 = 32|
| 5 x 5 = 25 | 8 x 5 = 40|
| 5 x 6 = 30 | |
| 5 x 7 = 35 | |
| 5 x 8 = 40 | |

CM = 40 <br/>
LCM = 40

```C
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
```
### Factorial ###
5! = 5x4x3x2x1 = 120 <br/>
0! = 1
```C
#include <stdio.h>
#include <conio.h>

int factorial(int n){
    if(n < 0)
        return -1; //wrong input
    else if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
void main(){
    /*
    num = store number that need find factorial
    fact = store factorial result
    i = store factorial multiple value
    */
    int num,fact = 1,i; 
    printf("Enter a number \n");
    scanf("%d",&num);
    /*if(num == 0)
    else    
        for(i = num; i > 0; i--)
            fact = i * fact;
    */
    //using recursive function
    fact = factorial(num);      
    printf("Factorial of !%d=%d",num,fact);

}
```
### 1 + 2 + 2 ......+n ###

```
#include <stdio.h>
#include <conio.h>

void main(){
    /*
    max = store maximum number of series
    sum = store summation result
    i = store individual value of series
    */
    int max,i;
    int sum=0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&max);

    printf("Sum of the series: ");

    for(i =1;i <= max;i++){
         printf("%d ",i);
         if(i != max)
            printf(" + ");
         sum += i;
     }
     printf(" = %d ",sum);

}
```
### Mattrix Multiplication ###
![alt text](image/matrix-multiply-order.gif "Logo Title Text 1")

```C 
#include <stdio.h>
#include <conio.h>

void main(){
    /*
    a = store 1st Matrix
    b = store 2st Matrix
    m = store Multiply Matrix result
    r = no of row
    c = no of column
    i,j,k = array index store
    */
    int a[10][10],b[10][10],mul[10][10],r,c;
    int i,j,k;
    printf("enter the number of row=");  
    scanf("%d",&r);

    printf("enter the number of column=");  
    scanf("%d",&c); 

    //creat a create
    for(i=0;i<r;i++)
        for(j = 0; j < c; j++)
            scanf("%d",&a[i][j]); 

    // create b matrix        
    for(i=0;i<r;i++)
        for(j = 0; j < c; j++)
            scanf("%d",&b[i][j]);

    //mutipley        
    for(i=0;i<r;i++)
        for(j = 0; j < c; j++)
            for(k = 0; k < c; k++)  
                mul[i][j] += a[i][k] * b[k][j];

    //print result
    for(i=0;i<r;i++)
        for(j = 0; j < c; j++)
            printf("%d\t",mul[i][j]);
        //printf("\n");
}
```

### Pyramid ###
![alt text](image/numpyra.png "Logo Title Text 1")

```C
#include <stdio.h>
#include <conio.h>

void main(){
    /*
    n=pyramid row
    i = store individual value
    i,j,l,k = printing purpose
    */
    int n,i,j,l,k;

    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){

        //space print
        for(j = 1; j <= n-i;j++)
            printf(" ");
        
        //number print
        for(k=1;k<=i;k++)  
            printf("%d",k);

        //number print decending
        for(l=i-1;l>=1;l--)
            printf("%d",l);

        //new line
        printf("\n");         

    }  

}
```
### Prime Number ###

```C
#include <stdio.h>
#include <conio.h>

void main(){
    /*
    n = number that need check prime number
    isPrime = flag for prime number yes
    i = divided value
    */
    int i,n,isPrime = 1;
    printf("enter a numebr");  
    scanf("%d",&n); 
    for(i = 2; i < n/2; i++){
        if(n % i == 0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1)
        printf("%d is a prime number\n",n );
    else
        printf("%d is not a prime number\n",n );

}
```
### Fibonacci(0, 1, 1, 2, 3, 5, 8, 13, 21) ###

```C
#include <stdio.h>
#include <conio.h>

void main(){
    /*
    num = how many fibonacci  need
    sum = sum of privious and current number
    i = only for looping
    n1 = Store Ist number
    n2 = Store 2nd number
    */
    int n1 = 0,n2 = 1,sum,i,num;
    printf("How many fibonacci  need ? ");  
    scanf("%d",&num); 
    //printing first two fibonacci
    printf("\n%d %d",n1,n2);
    //loop starts from 2 because 0 and 1 are already printed   
    for(i=2;i<num;i++){
        sum = n1 + n2;
        printf(" %d",sum);
        // regenerate previous number before disply numer
        n1 = n2;
        n2 = sum; 
    }

}
```
### Palindrome ###
if a number is equal to its reverse number then it is called palindrome number. <br/>
131 = 131(reverse)

```C
#include <stdio.h>
#include <conio.h>

void main(){
    /*
    n = store number that needs to check palindrome
    reverse = store reverse result
    r = store reminder
    dividend = store division result 
    */
    int n,reverse=0,r,dividend;

    printf("Enter a number to check palindrome ? ");  
    scanf("%d",&n);
    //get initial dividend
    dividend = n;

    //until dividend greater than 0
    while(dividend>0)  { 
        //reminder 
        r=dividend%10;
        //generate reverse  
        reverse=(reverse*10)+r; 
        //division result 
        dividend=dividend/10;  
    }  
    if(n == reverse)  
        printf("%d is a palindrome number " , n);  
    else  
        printf("%d is not a palindrome number " , n);  

}
```
### swap two numbers without using third variable ###
```C
#include<stdio.h>  
#include<conio.h>  
main()  {  
    int a=10, b=20;    
    printf("Before swap a=%d b=%d",a,b);    
      
    a=a+b;//a=30 (10+20)  
    b=a-b;//b=10 (30-20)  
    a=a-b;//a=20 (30-10)  
      
    printf("\nAfter swap a=%d b=%d",a,b);  
    getch();  
} 
```
### Decimal To binary ###
5 = 101 (binary)

```C
#include <stdio.h>
#include <conio.h>

void main(){
    /*
    n = store number that needs convert binary
    binary = store binary result
    r = store reminder
    dividend = store division result 
    */
    int n,binary=0,r,dividend;

    printf("Enter a number to convert binary ? ");  
    scanf("%d",&n);
    //get initial dividend
    dividend = n;

    //until dividend greater than 0
    while(dividend>0)  { 
        //reminder 
        r=dividend%2;
        //generate reverse  
        binary=(binary*10)+r; 
        //division result 
        dividend=dividend/2;  
    }
    printf("%d binary = %d \n",n,binary );
}
```





