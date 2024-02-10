#include "config.h"

/**
* colourthree - entry point
* Return: nothing
*/

void colourthree()
{
	time_t t;
	char ans;
	int i = 5;
	char guess[100];
	char *colours[] = {"RED", "BLUE", "GREEN", "YELLOW", "BLACK",
		"ORANGE", "BROWN", "PINK", "PURPLE", "WHITE"};

	printf("Welcome to the Colour Guessing Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	while (ans == 'Y')
	{
		srand((unsigned int) time(&t));
		char *RandomColourString = colours[rand() % 10];

		printf("I have 10 colours: RED, BLUE, GREEN, YELLOW, BLACK, ORANGE, BROWN, PINK, PURPLE, WHITE.\n");
		printf("I have chosen one of the colours, can you guess it??\n");
		for (i = 5; i > 0; i--)
		{
			printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
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
				printf("Not the correct colour, %s.\n",
					i == 1 ? "game over" : "guess again");
			}
		}
		printf("Sorry, you lose!! The colour is %s.\n", RandomColourString);
		goto one;
	}
	printf("Thank you, Goodbye!!\n");
	gamethree();
}
