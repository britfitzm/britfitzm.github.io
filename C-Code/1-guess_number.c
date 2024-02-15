#include "config.h"

/**
* numberone - entry point
* Return: nothing
*/

void numberone()
{
	time_t t;
	char ans;
	int guess;

	printf("Welcome to the Number Guessing Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	if (ans == 'Y')
		printf("I have chosen a number between 0 and 10, can you guess it??\n");
	else
	{
		printf("Thank you, Goodbye!!\n");
		gameone();
	}
	srand((unsigned int) time(&t));
	int RandomNum = rand() % 11;
	while (ans == 'Y')
	{
		printf("Enter your guess: \n");
		scanf("%d", &guess);

		if (guess > RandomNum)
		{
			printf("Number too big, guess again.\n");
		}
		else if (guess < RandomNum)
		{
			printf("Number too small, guess again.\n");
		}
		else
		{
			printf("You guessed it, WELL DONE!! The number is %d.\n",
				RandomNum);
			goto one;
		}
	}
}
