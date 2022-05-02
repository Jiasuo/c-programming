#include <stdio.h>

void main(){
	// Declare string variable with 20 as max length
	char name[20];
	// Input title
	printf("Enter your name:");
	// Get input with fgets()
	fgets(name, 20, stdin);
	// Print to the console
	// fgets() will register /n (Enter key) as a character
	printf("Your name is: %s.\n", name);
}
