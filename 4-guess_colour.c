#include "config.h"

/**
* colourfour - entry point
* Return: nothing
*/

void colourfour()
{
	time_t t;
	char ans;
	char guess[100];
	int i = 4;
	char *colours[] = {"RED", "BLUE", "GREEN", "YELLOW", "BLACK", "GREY",
		"ORANGE", "BROWN", "PINK", "PURPLE", "WHITE", "VIOLET"};

	printf("Welcome to the Colour Guessing Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	while (ans == 'Y')
	{
		srand((unsigned int) time(&t));
		char *RandomColourString = colours[rand() % 12];

		printf("I have 12 colours: RED, BLUE, GREEN, YELLOW, BLACK, GREY, ORANGE, BROWN, PINK, PURPLE, WHITE, VIOLET.\n");
		printf("I have chosen one of the colours, can you guess it??\n");
		for (i = 4; i > 0; i--)
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
	gamefour();
}
