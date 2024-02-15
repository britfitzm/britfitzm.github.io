#include "config.h"

/**
* gameone - entry point
* Return: nothing
*/

void gameone()
{
	int choice;

one: printf("Welcome to My Games!!\n\n");
	printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("		1 - Guess the Colour\n");
	printf("		2 - Guess the Animal\n");
	printf("		3 - Guess the Number\n");
	printf("		4 - Addition\n");
	printf("		5 - Exit\n\n");
	printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("Enter choice:\n");
	scanf("%d", &choice);

	if (choice == 1)
	{
		colourone();
	}
	else if (choice == 2)
	{
		animalone();
	}
	else if (choice == 3)
	{
		numberone();
	}
	else if (choice == 4)
	{
		additionone();
	}
	else if (choice == 5)
	{
		printf("Thank You, Goodbye Friend!!\n\n");
		guessmygame();
	}
	else
		goto one;
}
