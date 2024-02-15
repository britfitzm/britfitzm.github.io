#include "config.h"

/**
* gametwo - entry point
* Return: nothing
*/

void gametwo()
{
	int choice;

one: printf("Welcome to My Games!!\n\n");
	printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("		1 - Guess the Colour\n");
	printf("		2 - Guess the Animal\n");
	printf("		3 - Guess the Number\n");
	printf("		4 - Addition\n");
	printf("		5 - Multiplication\n");
	printf("		6 - Exit\n\n");
	printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("Enter choice:\n");
	scanf("%d", &choice);

	if (choice == 1)
	{
		colourtwo();
	}
	else if (choice == 2)
	{
		animaltwo();
	}
	else if (choice == 3)
	{
		numbertwo();
	}
	else if (choice == 4)
	{
		additiontwo();
	}
	else if (choice == 5)
	{
		multiplicationtwo();
	}
	else if (choice == 6)
	{
		printf("Thank You, Goodbye Friend!!\n\n");
		guessmygame();
	}
	else
		goto one;
}
