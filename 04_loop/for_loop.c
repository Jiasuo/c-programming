#include <stdio.h>

/*
 * This console program is made in 2 steps:
 * 		1- Input 6 lotery numbers between 1 and 49
 * 		2- Print all numbers from 1 to 49
 * 			When it's a winning number, add a "*" after the number
*/

int * setNumbers();
void goLotery(int numbers[]);

void main()
{
	int *loteryNumbers = setNumbers();
	goLotery(loteryNumbers);		
}

// Get 6 lotery numbers from input
int * setNumbers(){
	// set the number of loops
	int chosenNumbers[6];
	// Declare current loop number	
	int i;
	// start a loop
	for(i=0; i < 6; i++)
	{
		// Prompt to enter a number between 1 and 49
		printf("Please enter a number (1-49): ");
		// Get input number
		scanf("%d", chosenNumbers[i]);
		// Check if the number is between 1 and 49
		while(chosenNumbers[i] < 1 || chosenNumbers[i] > 49){
			// prompt again
			printf("Please let it between 1 and 49: ");
			scanf("%d", chosenNumbers[i]);
		}
	}
	// Return the array
	return chosenNumbers;
}

// Lotery function
void goLotery(int loteryNumbers[])
{
	// loop from 1 to 49
	int i;
	int j;
	int bingo = 0;
	for(i = 1; i <= 49; i++){
		// Check if the current number is in loteryNumbers
		for(j=0; j <=5; j++){
			if(loteryNumbers[j] == i)
			{
				bingo = 1;
				break;
			}
		}
		// If bingo, then print the current number + "*"
		if(bingo){
			printf("%d*\n", i);
		// 	And reset bingo to 0
			bingo = 0;
		}else{
		// Else: print current number
			printf("%d\n", i);
		}
	}
}
