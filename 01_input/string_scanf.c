#include <stdio.h>

void main(){
	// Declare a string variable
	char name[20];
	// Get input from console
	printf("Enter your name:");
	// Using scanf: Space character will interrupt the input
	scanf("%s", name);
	printf("\nYour name is: %s\n", name);
}
