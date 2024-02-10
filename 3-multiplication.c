#include "config.h"

/**
* multiplicationthree - entry point
* Return: nothing
*/

void multiplicationthree()
{
	time_t t;
	char ans;
	int guess;
	int i = 15;

	printf("Welcome to the Multiplication Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	while (ans == 'Y')
	{
		srand((unsigned int) time(&t));
		int RandomNumOne = rand() % 13;
		int RandomNumTwo = rand() % 13;
		int answer = RandomNumOne * RandomNumTwo;

		for (i = 15; i > 0; i--)
		{
			printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
			printf("%d x %d = \n", RandomNumOne, RandomNumTwo);
			scanf("%d", &guess);

			if (guess > answer)
			{
				printf("Number too big, %s.\n",
					i == 1 ? "game over" : "try again");
			}
			else if (guess < answer)
			{
				printf("Number too small, %s.\n",
					i == 1 ? "game over" : "try again");
			}
			else
			{
				printf("You got it, WELL DONE!! The answer is %d.\n",
					answer);
				goto one;
			}
		}
		printf("Sorry, you lose!! The answer is %d.\n", answer);
		goto one;
	}
	printf("Thank you, Goodbye!!\n");
	gamethree();
}
