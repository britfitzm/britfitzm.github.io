#include "config.h"

/**
* numberfour - entry point
* Return: nothing
*/

void numberfour()
{
	time_t t;
	char ans;
	int guess;
	int i = 25;

	printf("Welcome to the Number Guessing Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	while (ans == 'Y')
	{
		srand((unsigned int) time(&t));
		int RandomNum = rand() % 1001;

		printf("I have chosen a number between 0 and 1000, can you guess it??\n");
		for (i = 25; i > 0; i--)
		{
			printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
			printf("Enter your guess: \n");
			scanf("%d", &guess);

			if (guess > RandomNum)
			{
				printf("Number too big, %s.\n",
					i == 1 ? "game over" : "guess again");
			}
			else if (guess < RandomNum)
			{
				printf("Number too small, %s.\n",
					i == 1 ? "game over" : "guess again");
			}
			else
			{
				printf("You guessed it, WELL DONE!! The number is %d.\n",
					RandomNum);
				goto one;
			}
		}
		printf("Sorry, you lose!! The number is %d.\n", RandomNum);
		goto one;
	}
	printf("Thank you, Goodbye!!\n");
	gamefour();
}
