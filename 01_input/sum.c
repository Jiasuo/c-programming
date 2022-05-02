#include <stdio.h>

void main(){
	double a;
	double b;
	printf("Welcome to SUM Calculator - 2022 Limited Edition\n");
	printf("All you have to do is to give me two numbers, I'll add them and give you their sum instantly\n-----------------------------------\n\n");
	printf("First number: ");
	// Don't forget to give the pointer as reference, NOT THE VARIABLE ITSELF
	scanf("%lf", &a);
	printf("\nSecond number: ");
	// Don't forget to give a pointer as reference, NOT THE VARIABLE ITSELF
	scanf("%lf", &b);
	printf("\nThe sum is: %.2f\n", a+ b);
}	
