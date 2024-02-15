#include "config.h"

/**
* colourone - entry point
* Return: nothing
*/

void colourone()
{
	time_t t;
	char ans;
	char *colours[] = {"RED", "BLUE", "GREEN", "YELLOW", "BLACK"};
	char guess[100];

	printf("Welcome to the Colour Guessing Game!!\n");
 one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	if (ans == 'Y')
	{
		printf("I have 5 colours: RED, BLUE, GREEN, YELLOW, BLACK.\n");
		printf("I have chosen one of the colours, can you guess it??\n");
	}
	else
	{
		printf("Thank you, Goodbye!!\n");
		gameone();
	}
	srand((unsigned int) time(&t));
	char *RandomColourString = colours[rand() % 5];

	while (ans == 'Y')
	{
		printf("Enter your guess: \n");
		scanf("%99s", guess);
		int answer = strcmp(guess, RandomColourString);

		if (answer == 0)
		{
			printf("You guessed it, WELL DONE!! The colour is %s.\n",
				RandomColourString);
			goto one;
		}
		else
		{
			printf("Not the correct colour, guess again.\n");
		}
	}
}
