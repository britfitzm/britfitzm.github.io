#include "config.h"

/**
* guessmygame - entry point
* Return: nothing
*/

void guessmygame()
{
	int choice;

	printf("**********************************************************************\n");
	printf("-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-\n");
	printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("		WELCOME TO MY GUESSING GAMES\n\n");
	printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n");
	printf("-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-\n");
	printf("**********************************************************************\n\n");
one: printf("Please Select Age:\n\n");
	printf("	+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("		1 - 5 years to 6 years\n");
	printf("		2 - 7 years to 9 years\n");
	printf("		3 - 10 years to 13 years\n");
	printf("		4 - 14 years to 16 years\n");
	printf("		5 - Exit\n\n");
	printf("	+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
	printf("Enter Choice:\n");
	scanf("%d", &choice);

	if (choice == 1)
	{
		gameone();
	}
	else if (choice == 2)
	{
		gametwo();
	}
	else if (choice == 3)
	{
		gamethree();
	}
	else if (choice == 4)
	{
		gamefour();
	}
	else if (choice == 5)
	{
		printf("Goodbye Friend!!\n\n");
	}
	else
		goto one;
}
