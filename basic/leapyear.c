#include <stdio.h>
#include <conio.h>

void main(){
	int y;

    printf("Enter a year");
    scanf("%d",&y);

    //if divible by 400
    if(y % 400 == 0)
    	printf("%d is a leap year", y);
    //if divible not by 100
	else if(y % 100 == 0)
		printf("%d is a not leap year", y);

	////if divible by 4
	else if	(y % 4 == 0)
    	printf("%d is a leap year", y);
    else
    	printf("%d is a not leap year", y);

}