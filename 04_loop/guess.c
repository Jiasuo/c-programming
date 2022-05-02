#include <stdio.h>

void main(){
	// Set the winning number
	int secret = 8;
	// Declare a guess variable for storing inputs
	int guess;
	// Declare a counter and initialize it to 0
	int count = 0;
	// Declare a limit for guessing
	int limit = 5;
	
	// Start loop
	// Condition of looping: count inferior to limit and guess different to secret
	while(count++ < limit && guess != secret){
		// Prompt a guess
		printf("Guess a number: ");
		scanf("%d", &guess);
	}
	// Print "You lose" if the count is equal to limit
	if(count >= limit) printf("You lose...\n");
	// Print "You won!" else
	else printf("You won!\n");
}
