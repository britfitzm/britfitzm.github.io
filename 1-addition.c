#include "config.h"

/**
* additionone - entry point
* Return: nothing
*/

void additionone()
{
	time_t t;
	char ans;
	int guess;

	printf("Welcome to the Addition Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	srand((unsigned int) time(&t));
	int RandomNumOne = rand() % 11;
	int RandomNumTwo = rand() % 11;

	while (ans == 'Y')
	{
	int answer = RandomNumOne + RandomNumTwo;

		printf("%d + %d = \n", RandomNumOne, RandomNumTwo);
		scanf("%d", &guess);

		if (guess > answer)
		{
			printf("Number too big, try again.\n");
		}
		else if (guess < answer)
		{
			printf("Number too small, try again.\n");
		}
		else
		{
			printf("You got it, WELL DONE!! The answer is %d.\n",
				answer);
			goto one;
		}
	}
	printf("Thank you, Goodbye!!\n");
	gameone();
}
