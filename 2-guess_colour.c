#include "config.h"

/**
* colourtwo - entry point
* Return: nothing
*/

void colourtwo()
{
	time_t t;
	char ans;
	char guess[100];
	char *colours[] = {"RED", "BLUE", "GREEN", "YELLOW", "BLACK",
		"ORANGE", "BROWN", "PURPLE"};

	printf("Welcome to the Colour Guessing Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	if (ans == 'Y')
	{
		printf("I have 8 colours: RED, BLUE, GREEN, YELLOW, BLACK, ORANGE, BROWN, PURPLE.\n");
		printf("I have chosen one of the colours, can you guess it??\n");
	}
	else
	{
		printf("Thank you, Goodbye!!\n");
		gametwo();
	}
	srand((unsigned int) time(&t));
	char *RandomColourString = colours[rand() % 8];

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
