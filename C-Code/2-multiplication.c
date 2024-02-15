#include "config.h"

/**
* multiplicationtwo - entry point
* Return: nothing
*/

void multiplicationtwo()
{
	time_t t;
	char ans;
	int guess;

	printf("Welcome to the Multiplication Game!!\n");
one: printf("Do you want to play?? Enter Y/n: \n");
	scanf(" %c", &ans);
	srand((unsigned int) time(&t));
	int RandomNumOne = rand() % 7;
	int RandomNumTwo = rand() % 7;

	while (ans == 'Y')
	{
		int answer = RandomNumOne * RandomNumTwo;

		printf("%d x %d = \n", RandomNumOne, RandomNumTwo);
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
	gametwo();
}
