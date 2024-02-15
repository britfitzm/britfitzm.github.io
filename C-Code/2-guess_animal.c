#include "config.h"

/**
* animaltwo - entry point
* Return: nothing
*/

void animaltwo()
{
	time_t t;
	char ans;
	char guess[100];
	char *animals[] = {"cow", "pig", "cat", "dog", "bat", "pony",
		"duck", "lion"};

	printf("Welcome to the Animal Guessing Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	if (ans == 'Y')
	{
		printf("I have 8 animals: cow, pig, cat, dog, bat, pony, duck, lion.\n");
		printf("I have chosen one of the animals, can you guess it??\n");
	}
	else
	{
		printf("Thank you, Goodbye!!\n");
		gametwo();
	}
	srand((unsigned int) time(&t));
	char *RandomAnimalString = animals[rand() % 8];

	while (ans == 'Y')
	{
		printf("Enter your guess: \n");
		scanf("%99s", guess);
		int answer = strcmp(guess, RandomAnimalString);

		if (answer == 0)
		{
			printf("You guessed it, WELL DONE!! The animal is %s.\n",
				RandomAnimalString);
			goto one;
		}
		else
		{
			printf("Not the correct animal, guess again.\n");
		}
	}
}
