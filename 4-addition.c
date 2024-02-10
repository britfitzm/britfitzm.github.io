#include "config.h"

/**
* additionfour - entry point
* Return: nothing
*/

void additionfour()
{
	time_t t;
	char ans;
	int guess;
	int i = 20;

	printf("Welcome to the Addition Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	while (ans == 'Y')
	{
		srand((unsigned int) time(&t));
		int RandomNumOne = rand() % 1001;
		int RandomNumTwo = rand() % 1001;
		int answer = RandomNumOne + RandomNumTwo;

		for (i = 20; i > 0; i--)
		{
			printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
			printf("%d + %d = \n", RandomNumOne, RandomNumTwo);
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
	gamefour();
}
