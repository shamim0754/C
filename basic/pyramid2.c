#include <stdio.h>
#include <conio.h>

void main(){
	/*
	rows = How many rows to generat pyramid
	i = rows looping
    j = print loopint
    alphabet = store character
	*/
	int i, j, rows,alphabet='A';

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(i=1; i <= rows; ++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c", alphabet);
        }
        ++alphabet;

        printf("\n");
    }
    getch();
}

	