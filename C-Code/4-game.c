#include "config.h"

/**
* gamefour - entry point
* Return: nothing
*/

void gamefour()
{
	int choice;

one: printf("Welcome to My Games!!\n\n");
	printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("		1 - Guess the Colour\n");
	printf("		2 - Guess the Animal\n");
	printf("		3 - Guess the Number\n");
	printf("		4 - Addition\n");
	printf("		5 - Multiplication\n");
	printf("		6 - Subtraction\n");
	printf("		7 - Exit\n\n");
	printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("Enter choice:\n");
	scanf("%d", &choice);

	if (choice == 1)
	{
		colourfour();
	}
	else if (choice == 2)
	{
		animalfour();
	}
	else if (choice == 3)
	{
		numberfour();
	}
	else if (choice == 4)
	{
		additionfour();
	}
	else if (choice == 5)
	{
		multiplicationfour();
	}
	else if (choice == 6)
	{
		subtractionfour();
	}
	else if (choice == 7)
	{
		printf("Thank You, Goodbye Friend!!\n\n");
		guessmygame();
	}
	else
		goto one;
}
