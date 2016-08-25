#include <stdio.h>
#include <conio.h>
#include <string.h>
#define start main

void change(int num){
	//printf("before %d\n",*num);
	num += 100; // change value
	//printf("after %d\n",*num);
}
int factorial(int n){
	if(n < 0)
		return -1; //wrong input
	else if(n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}
struct employee{
	int id;
	char name[50];
	float salary;
};
void start(){
	printf("Hello world\n");
	int n,a[20],i,j,temp;

    printf("Enter total numbers of elements: ");
    scanf("%d",&n);

    printf("Enter %d elements: ",n);
    // input array value
    for(i = 0; i < n; i++){
      scanf("%d",&a[i]);
    }
    
    // input array value
    for(i = 0; i < n; i++){ //number of iternation need for bubble up
    	 for(j = 0; j < n-1; j++){ //n-i for performance you can use n
    	 	//pickup greater value
    	 	if(a[j] > a[j+1]){
    	 		temp = a[j]; // for swaping purpose
    	 		a[j] = a[j+1]; // bubble up
    	 		a[j+1] = temp; // swap
    	 	}
    	 }
    }
    // input array value
    for(i = 0; i < n; i++){
      printf("%d ",a[i]);
    }
	/*
	int n,i;
    int sum=0;

    printf("Enter the n i.e. max values of series: ");
    scanf("%d",&n);

   // sum = (n * (n + 1)) / 2;

    printf("Sum of the series: ");

    for(i =1;i <= n;i++){
         printf("%d ",i);
         if(i != n)
         	printf(" + ");
     	 sum += i;
     }
     printf(" = %d ",sum);
	/*
	int n1, n2, minMultiple,gcd,lcm,i; // start target number above min valu
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    for(i = 1; i <= n1 && i <= n2; i++){
    	if(n1 % i == 0 && n2 % i == 0)
    		gcd = i;
    }
    lcm = n1 * n2 / gcd;
    printf("%d\n", gcd);
    printf("lcm = %d\n",lcm );
    /*
    minMultiple = n1 > n2 ? n1 : n2;
    while(1){
    	if(minMultiple % n1 == 0 && minMultiple % n2 == 0){
    		printf("%d\n", minMultiple);
    		break;
    	}
    	++minMultiple;

    }
	/*FILE *fp;  
   char buff[255];//creating char array to store data of file  
   fp = fopen("emp.txt", "r");  
   while(fscanf(fp, "%s", buff)!=EOF){  
   		printf("%s ", buff ); 
   		break; 
   }  
   fclose(fp);  
	/*FILE *fptr;  
    int id;  
    char name[30];  
    float salary;  
    fptr = fopen("emp.txt", "w+");/*  open for writing  
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");  
        return;  
    }  
    printf("Enter the id\n");  
    scanf("%d", &id);  
    fprintf(fptr, "Id= %d\n", id);  
    printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fptr, "Name= %s\n", name);  
    printf("Enter the salary\n");  
    scanf("%f", &salary);  
    fprintf(fptr, "Salary= %.2f\n", salary);  
    fclose(fptr);  
	/*struct employee em[2];
	int i;
	em[0].id = 101;
	strcpy(em[0].name,"Md.Shamim");
	em[0].salary=100.00;
	for(i = 0;i<2;i++)
		printf("Id = %d,name=%s\n",em[i].id,em[i].name );  
	/*
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
    

	/*
	int n,sum=0,temp,r,i,j,l,k;

	printf("Enter a number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j = 1; j <= n-i;j++)
			printf(" ");
		
		for(k=1;k<=i;k++)  
			printf("%d",k);
		for(l=i-1;l>=1;l--)
			printf("%d",l);
		printf("\n");	 	  

	}  
	/*
	temp = n; // temp need for final comparison

	while(n > 0 ){
		r = n % 2;
		sum = sum * 10 + r;
		//sum += r * r * r;
		n = n / 2; 
	}
	//if(temp == sum)
		printf("%d is a binary\n",sum );
	
	/*
	for(i = 2; i < n/2; i++){
		if(n % i == 0){
			isPrime = 1;
			break;
		}
	}
	if(isPrime == 0)
		printf("%d is a prime number\n",n );
	else
		printf("%d is not a prime number\n",n );*/

}
