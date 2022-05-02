#include <stdio.h>

void main(){
	// Declare a string and intialize it
	char str[] = "Hello there, I'm happy to meet with you";
	// Try to change it with an input from console
	printf("Please enter something below: \n");
	scanf("%s", str);
	// Output modified string
	printf("\nstr=\"%s\"\n", str);
}
