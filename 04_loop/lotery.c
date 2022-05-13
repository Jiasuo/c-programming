#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * This console program is made in 2 steps:
 * 		1- Input 6 different lotery numbers between 1 and 49
 * 		2- Generate 6 different winning numbers between 1 and 49
 * 		3- Compare lotery numbers & winning numbers and count the matching numbers
*/

void goLotery(int loteryNumbers[], int winningNumbers[]);

void main()
{
	int loteryNumbers[6];
	int winningNumbers[6];
	int i, j;
	// initialize random generator
	srand(time(0));
	// start a loop
	for(i=0; i < 6; i++){
		// Prompt to enter a number between 1 and 49
		printf("Please enter a number (1-49): ");
		// Get input number
		scanf("%d", &loteryNumbers[i]);
		// Check if the number is between 1 and 49
		while(loteryNumbers[i] < 1 || loteryNumbers[i] > 49){
			// prompt again
			printf("Please let it between 1 and 49: ");
			scanf("%d", &loteryNumbers[i]);
		}
		// Check if the number is dupe
		for(j=0; j < i; j++){
			// If dupe number
			while(loteryNumbers[j] == loteryNumbers[i]){
					printf("You've already inputted %d, please enter another number: ", loteryNumbers[i]);
					scanf("%d", &loteryNumbers[i]);
			}
		}
	}
	// Output the numbers
	printf("You've chosen: ");
	for(i = 0; i < 6; i++){
		if(i==0){
			printf("%d ", loteryNumbers[i]);
		}else if(i == 5){
			printf("and %d.", loteryNumbers[i]);
		} else{
			printf("%d, ", loteryNumbers[i]);
		}
	}
	printf("\n");
	// Generate winning Numbers
	winningNumbers[0] = rand() % 49 + 1;
	winningNumbers[1] = rand() % 49 + 1;
	winningNumbers[2] = rand() % 49 + 1;
	winningNumbers[3] = rand() % 49 + 1;
	winningNumbers[4] = rand() % 49 + 1;
	winningNumbers[5] = rand() % 49 + 1;
	// Redo random numbers if duplicate
	while(winningNumbers[0] == winningNumbers[1] || winningNumbers[0] == winningNumbers[2] || winningNumbers[0] == winningNumbers[3] || winningNumbers[0] == winningNumbers[4] || winningNumbers[0] == winningNumbers[5] || winningNumbers[1] == winningNumbers[2] || winningNumbers[1] == winningNumbers[3] || winningNumbers[1] == winningNumbers[4] || winningNumbers[1] == winningNumbers[5] || winningNumbers[2] == winningNumbers[3] || winningNumbers[2] == winningNumbers[4] || winningNumbers[2] == winningNumbers[5] || winningNumbers[3] == winningNumbers[4] || winningNumbers[3] == winningNumbers[5] || winningNumbers[4] == winningNumbers[5]){
		
	winningNumbers[0] = rand() % 49 + 1;
	winningNumbers[1] = rand() % 49 + 1;
	winningNumbers[2] = rand() % 49 + 1;
	winningNumbers[3] = rand() % 49 + 1;
	winningNumbers[4] = rand() % 49 + 1;
	winningNumbers[5] = rand() % 49 + 1;
	} 
	printf("Winning numbers are: %d %d %d %d %d %d\n", winningNumbers[0], winningNumbers[1], winningNumbers[2], winningNumbers[3], winningNumbers[4], winningNumbers[5]);
	goLotery(loteryNumbers, winningNumbers);		
}

// Lotery function
void goLotery(int loteryNumbers[], int winningNumbers[])
{
	int i, j, k;
	int won = 0;
	int bingo = 0;
	// loop from 1 to 49
	for(i = 1; i <= 49; i++){
		// Check if the current number is in loteryNumbers
		for(j = 0; j <= 5; j++){
			if(loteryNumbers[j] == i){
				// Check if there is a winning number
				for(k = 0; k < 6; k++){
					if(winningNumbers[k] == loteryNumbers[j]){
						bingo = 1;
						won++;
						break;
					}
				} 
				// If bingo, then print the current number + "*"
				if(bingo)
					printf("[%d]", i);
				break;
			}
		}
		if(bingo != 1){
			printf("%d", i);
		}
		if(i % 8 == 0){
			printf("\n");
		} else {
			printf("\t");
		}
		// Reset bingo
		bingo = 0;
	}
	printf("\n");
	// Print winning:
	printf("You have %d winning numbers\n", won);
}
