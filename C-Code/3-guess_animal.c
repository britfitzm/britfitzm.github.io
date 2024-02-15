#include "config.h"

/**
* animalthree - entry point
* Return: nothing
*/

void animalthree()
{
	time_t t;
	char ans;
	int i = 6;
	char guess[100];
	char *animals[] = {"cow", "pig", "cat", "dog", "bat", "pony",
		"duck", "lion", "tiger", "horse", "chicken", "rooster"};

	printf("Welcome to the Animal Guessing Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	while (ans == 'Y')
	{
		srand((unsigned int) time(&t));
		char *RandomAnimalString = animals[rand() % 12];

		printf("I have 12 animals: cow, pig, cat, dog, bat, pony, duck, lion, tiger, horse, chicken, rooster.\n");
		printf("I have chosen one of the animals, can you guess it??\n");
		for (i = 6; i > 0; i--)
		{
			printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
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
				printf("Not the correct animal, %s.\n",
					i == 1 ? "game over" : "guess again");
			}
		}
		printf("Sorry, you lose!! The animal is %s.\n", RandomAnimalString);
		goto one;
	}
	printf("Thank you, Goodbye!!\n");
	gamethree();
}
