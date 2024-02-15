#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
* main - entry point
* Return: nothing
*/

int main(void)
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
		int select;

	two: printf("Welcome to My Games!!\n\n");
		printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
		printf("		1 - Guess the Colour\n");
		printf("		2 - Guess the Animal\n");
		printf("		3 - Guess the Number\n");
		printf("		4 - Addition\n");
		printf("		5 - Exit\n\n");
		printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
		printf("Enter choice:\n");
		scanf("%d", &select);

		if (select == 1)
		{
			time_t t;
			char ans;
			char *colours[] = {"RED", "BLUE", "GREEN", "YELLOW", "BLACK"};
			char guess[100];

			printf("Welcome to the Colour Guessing Game!!\n");
		three: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			if (ans == 'Y')
			{
				printf("I have 5 colours: RED, BLUE, GREEN, YELLOW, BLACK.\n");
				printf("I have chosen one of the colours, can you guess it??\n");
			}
			else
			{
				printf("Thank you, Goodbye!!\n");
				goto two;
			}
			srand((unsigned int) time(&t));
			char *RandomColourString = colours[rand() % 5];

			while (ans == 'Y')
			{
				printf("Enter your guess: \n");
				scanf("%99s", guess);
				int answer = strcmp(guess, RandomColourString);

				if (answer == 0)
				{
					printf("You guessed it, WELL DONE!! The colour is %s.\n",
						RandomColourString);
					goto three;
				}
				else
				{
					printf("Not the correct colour, guess again.\n");
				}
			}
		}
		else if (select == 2)
		{
			time_t t;
			char ans;
			char *animals[] = {"cow", "pig", "cat", "dog", "bat"};
			char guess[100];

			printf("Welcome to the Animal Guessing Game!!\n");
		four: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			if (ans == 'Y')
			{
				printf("I have 5 animals: cow, pig, cat, dog, bat.\n");
				printf("I have chosen one of the animals, can you guess it??\n");
			}
			else
			{
				printf("Thank you, Goodbye!!\n");
				goto two;
			}
			srand((unsigned int) time(&t));
			char *RandomAnimalString = animals[rand() % 5];

			while (ans == 'Y')
			{
				printf("Enter your guess: \n");
				scanf("%99s", guess);
				int answer = strcmp(guess, RandomAnimalString);

				if (answer == 0)
				{
					printf("You guessed it, WELL DONE!! The animal is %s.\n",
						RandomAnimalString);
					goto four;
				}
				else
				{
					printf("Not the correct animal, guess again.\n");
				}
			}
		}
		else if (select == 3)
		{
			time_t t;
			char ans;
			int guess;

			printf("Welcome to the Number Guessing Game!!\n");
		five: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			if (ans == 'Y')
				printf("I have chosen a number between 0 and 10, can you guess it??\n");
			else
			{
				printf("Thank you, Goodbye!!\n");
				goto two;
			}
			srand((unsigned int) time(&t));
			int RandomNum = rand() % 11;

			while (ans == 'Y')
			{
				printf("Enter your guess: \n");
				scanf("%d", &guess);

				if (guess > RandomNum)
				{
					printf("Number too big, guess again.\n");
				}
				else if (guess < RandomNum)
				{
					printf("Number too small, guess again.\n");
				}
				else
				{
					printf("You guessed it, WELL DONE!! The number is %d.\n",
						RandomNum);
					goto five;
				}
			}
		}
		else if (select == 4)
		{
			time_t t;
			char ans;
			int guess;

			printf("Welcome to the Addition Game!!\n");
		six: printf("Do you want to play?? Enter Y/n: \n");
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
					goto six;
				}
			}
			printf("Thank you, Goodbye!!\n");
			goto two;
		}
		else if (select == 5)
		{
			printf("Thank You, Goodbye Friend!!\n\n");
			goto one;
		}
		else
			goto two;
	}
	else if (choice == 2)
	{
		int select;

	seven: printf("Welcome to My Games!!\n\n");
		printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
		printf("		1 - Guess the Colour\n");
		printf("		2 - Guess the Animal\n");
		printf("		3 - Guess the Number\n");
		printf("		4 - Addition\n");
		printf("		5 - Multiplication\n");
		printf("		6 - Exit\n\n");
		printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
		printf("Enter choice:\n");
		scanf("%d", &select);

		if (select == 1)
		{
			time_t t;
			char ans;
			char guess[100];
			char *colours[] = {"RED", "BLUE", "GREEN", "YELLOW", "BLACK",
				"ORANGE", "BROWN", "PURPLE"};

			printf("Welcome to the Colour Guessing Game!!\n");
		eight: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			if (ans == 'Y')
			{
				printf("I have 8 colours: RED, BLUE, GREEN, YELLOW, BLACK, ORANGE, BROWN, PURPLE.\n");
				printf("I have chosen one of the colours, can you guess it??\n");
			}
			else
			{
				printf("Thank you, Goodbye!!\n");
				goto seven;
			}
			srand((unsigned int) time(&t));
			char *RandomColourString = colours[rand() % 8];

			while (ans == 'Y')
			{
				printf("Enter your guess: \n");
				scanf("%99s", guess);
				int answer = strcmp(guess, RandomColourString);

				if (answer == 0)
				{
					printf("You guessed it, WELL DONE!! The colour is %s.\n",
						RandomColourString);
					goto eight;
				}
				else
				{
					printf("Not the correct colour, guess again.\n");
				}
			}
		}
		else if (select == 2)
		{
			time_t t;
			char ans;
			char guess[100];
			char *animals[] = {"cow", "pig", "cat", "dog", "bat", "pony",
				"duck", "lion"};

			printf("Welcome to the Animal Guessing Game!!\n");
		nine: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			if (ans == 'Y')
			{
				printf("I have 8 animals: cow, pig, cat, dog, bat, pony, duck, lion.\n");
				printf("I have chosen one of the animals, can you guess it??\n");
			}
			else
			{
				printf("Thank you, Goodbye!!\n");
				goto seven;
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
					goto nine;
				}
				else
				{
					printf("Not the correct animal, guess again.\n");
				}
			}
		}
		else if (select == 3)
		{
			time_t t;
			char ans;
			int guess;

			printf("Welcome to the Number Guessing Game!!\n");
		ten: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			if (ans == 'Y')
				printf("I have chosen a number between 0 and 20, can you guess it??\n");
			else
			{
				printf("Thank you, Goodbye!!\n");
				goto seven;
			}
			srand((unsigned int) time(&t));
			int RandomNum = rand() % 21;

			while (ans == 'Y')
			{
				printf("Enter your guess: \n");
				scanf("%d", &guess);

				if (guess > RandomNum)
				{
					printf("Number too big, guess again.\n");
				}
				else if (guess < RandomNum)
				{
					printf("Number too small, guess again.\n");
				}
				else
				{
					printf("You guessed it, WELL DONE!! The number is %d.\n",
						RandomNum);
					goto ten;
				}
			}
		}
		else if (select == 4)
		{
			time_t t;
			char ans;
			int guess;

			printf("Welcome to the Addition Game!!\n");
		eleven: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			srand((unsigned int) time(&t));
			int RandomNumOne = rand() % 51;
			int RandomNumTwo = rand() % 51;

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
					goto eleven;
				}
			}
			printf("Thank you, Goodbye!!\n");
			goto seven;
		}
		else if (select == 5)
		{
			time_t t;
			char ans;
			int guess;

			printf("Welcome to the Multiplication Game!!\n");
		twelve: printf("Do you want to play?? Enter Y/n: \n");
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
					goto twelve;
				}
			}
			printf("Thank you, Goodbye!!\n");
			goto seven;
		}
		else if (select == 6)
		{
			printf("Thank You, Goodbye Friend!!\n\n");
			goto one;
		}
		else
			goto seven;
	}
	else if (choice == 3)
	{
		int select;

	thirteen: printf("Welcome to My Games!!\n\n");
		printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
		printf("		1 - Guess the Colour\n");
		printf("		2 - Guess the Animal\n");
		printf("		3 - Guess the Number\n");
		printf("		4 - Addition\n");
		printf("		5 - Multiplication\n");
		printf("		6 - Exit\n\n");
		printf("+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+\n\n");
		printf("Enter choice:\n");
		scanf("%d", &select);

		if (select == 1)
		{
			time_t t;
			char ans;
			int i = 5;
			char guess[100];
			char *colours[] = {"RED", "BLUE", "GREEN", "YELLOW", "BLACK",
				"ORANGE", "BROWN", "PINK", "PURPLE", "WHITE"};

			printf("Welcome to the Colour Guessing Game!!\n");
		fourteen: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			while (ans == 'Y')
			{
				srand((unsigned int) time(&t));
				char *RandomColourString = colours[rand() % 10];

				printf("I have 10 colours: RED, BLUE, GREEN, YELLOW, BLACK, ORANGE, BROWN, PINK, PURPLE, WHITE.\n");
				printf("I have chosen one of the colours, can you guess it??\n");
				for (i = 5; i > 0; i--)
				{
					printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
					printf("Enter your guess: \n");
					scanf("%99s", guess);
					int answer = strcmp(guess, RandomColourString);

					if (answer == 0)
					{
						printf("You guessed it, WELL DONE!! The colour is %s.\n",
							RandomColourString);
						goto fourteen;
					}
					else
					{
						printf("Not the correct colour, %s.\n",
							i == 1 ? "game over" : "guess again");
					}
				}
				printf("Sorry, you lose!! The colour is %s.\n", RandomColourString);
				goto fourteen;
			}
			printf("Thank you, Goodbye!!\n");
			goto thirteen;
		}
		else if (select == 2)
		{
			time_t t;
			char ans;
			int i = 6;
			char guess[100];
			char *animals[] = {"cow", "pig", "cat", "dog", "bat", "pony",
				"duck", "lion", "tiger", "horse", "chicken", "rooster"};

			printf("Welcome to the Animal Guessing Game!!\n");
		fifteen: printf("Do you want to play?? Enter Y/n: \n");
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
						goto fifteen;
					}
					else
					{
						printf("Not the correct animal, %s.\n",
							i == 1 ? "game over" : "guess again");
					}
				}
				printf("Sorry, you lose!! The animal is %s.\n", RandomAnimalString);
				goto fifteen;
			}
			printf("Thank you, Goodbye!!\n");
			goto thirteen;
		}
		else if (select == 3)
		{
			time_t t;
			char ans;
			int guess;
			int i = 15;

			printf("Welcome to the Number Guessing Game!!\n");
		sixteen: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			while (ans == 'Y')
			{
				srand((unsigned int) time(&t));
				int RandomNum = rand() % 51;

				printf("I have chosen a number between 0 and 50, can you guess it??\n");
				for (i = 15; i > 0; i--)
				{
					printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
					printf("Enter your guess: \n");
					scanf("%d", &guess);

					if (guess > RandomNum)
					{
						printf("Number too big, %s.\n",
							i == 1 ? "game over" : "guess again");
					}
					else if (guess < RandomNum)
					{
						printf("Number too small, %s.\n",
							i == 1 ? "game over" : "guess again");
					}
					else
					{
						printf("You guessed it, WELL DONE!! The number is %d.\n",
							RandomNum);
						goto sixteen;
					}
				}
				printf("Sorry, you lose!! The number is %d.\n", RandomNum);
				goto sixteen;
			}
			printf("Thank you, Goodbye!!\n");
			goto thirteen;
		}
		else if (select == 4)
		{
			time_t t;
			char ans;
			int guess;
			int i = 15;

			printf("Welcome to the Addition Game!!\n");
		seventeen: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			while (ans == 'Y')
			{
				srand((unsigned int) time(&t));
				int RandomNumOne = rand() % 101;
				int RandomNumTwo = rand() % 101;
				int answer = RandomNumOne + RandomNumTwo;

				for (i = 15; i > 0; i--)
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
						goto seventeen;
					}
				}
				printf("Sorry, you lose!! The answer is %d.\n", answer);
				goto seventeen;
			}
			printf("Thank you, Goodbye!!\n");
			goto thirteen;
		}
		else if (select == 5)
		{
			time_t t;
			char ans;
			int guess;
			int i = 15;

			printf("Welcome to the Multiplication Game!!\n");
		eighteen: printf("Do you want to play?? Enter Y/n: \n");
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
						goto eighteen;
					}
				}
				printf("Sorry, you lose!! The answer is %d.\n", answer);
				goto eighteen;
			}
			printf("Thank you, Goodbye!!\n");
			goto thirteen;
		}
		else if (select == 6)
		{
			printf("Thank You, Goodbye Friend!!\n\n");
			goto one;
		}
		else
			goto thirteen;
	}
	else if (choice == 4)
	{
		int select;

	nineteen: printf("Welcome to My Games!!\n\n");
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
		scanf("%d", &select);

		if (select == 1)
		{
			time_t t;
			char ans;
			char guess[100];
			int i = 4;
			char *colours[] = {"RED", "BLUE", "GREEN", "YELLOW", "BLACK", "GREY",
				"ORANGE", "BROWN", "PINK", "PURPLE", "WHITE", "VIOLET"};

			printf("Welcome to the Colour Guessing Game!!\n");
		twenty: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			while (ans == 'Y')
			{
				srand((unsigned int) time(&t));
				char *RandomColourString = colours[rand() % 12];

				printf("I have 12 colours: RED, BLUE, GREEN, YELLOW, BLACK, GREY, ORANGE, BROWN, PINK, PURPLE, WHITE, VIOLET.\n");
				printf("I have chosen one of the colours, can you guess it??\n");
				for (i = 4; i > 0; i--)
				{
					printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
					printf("Enter your guess: \n");
					scanf("%99s", guess);
					int answer = strcmp(guess, RandomColourString);

					if (answer == 0)
					{
						printf("You guessed it, WELL DONE!! The colour is %s.\n",
							RandomColourString);
						goto twenty;
					}
					else
					{
						printf("Not the correct colour, %s.\n",
							i == 1 ? "game over" : "guess again");
					}
				}
				printf("Sorry, you lose!! The colour is %s.\n", RandomColourString);
				goto twenty;
			}
			printf("Thank you, Goodbye!!\n");
			goto nineteen;
		}
		else if (select == 2)
		{
			time_t t;
			char ans;
			char guess[100];
			int i = 4;
			char *animals[] = {"cow", "pig", "cat", "dog", "bat", "pony",
				"duck", "lion", "tiger", "horse", "chicken", "rooster"};

			printf("Welcome to the Animal Guessing Game!!\n");
		twentyone: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			while (ans == 'Y')
			{
				srand((unsigned int) time(&t));
				char *RandomAnimalString = animals[rand() % 12];

				printf("I have 12 animals: cow, pig, cat, dog, bat, pony, duck, lion, tiger, horse, chicken, rooster.\n");
				printf("I have chosen one of the animals, can you guess it??\n");
				for (i = 4; i > 0; i--)
				{
					printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
					printf("Enter your guess: \n");
					scanf("%99s", guess);
					int answer = strcmp(guess, RandomAnimalString);

					if (answer == 0)
					{
						printf("You guessed it, WELL DONE!! The animal is %s.\n",
							RandomAnimalString);
						goto twentyone;
					}
					else
					{
						printf("Not the correct animal, %s.\n",
							i == 1 ? "game over" : "guess again");
					}
				}
				printf("Sorry, you lose!! The animal is %s.\n", RandomAnimalString);
				goto twentyone;
			}
			printf("Thank you, Goodbye!!\n");
			goto nineteen;
		}
		else if (select == 3)
		{
			time_t t;
			char ans;
			int guess;
			int i = 25;

			printf("Welcome to the Number Guessing Game!!\n");
		twentytwo: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			while (ans == 'Y')
			{
				srand((unsigned int) time(&t));
				int RandomNum = rand() % 1001;

				printf("I have chosen a number between 0 and 1000, can you guess it??\n");
				for (i = 25; i > 0; i--)
				{
					printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
					printf("Enter your guess: \n");
					scanf("%d", &guess);

					if (guess > RandomNum)
					{
						printf("Number too big, %s.\n",
							i == 1 ? "game over" : "guess again");
					}
					else if (guess < RandomNum)
					{
						printf("Number too small, %s.\n",
							i == 1 ? "game over" : "guess again");
					}
					else
					{
						printf("You guessed it, WELL DONE!! The number is %d.\n",
							RandomNum);
						goto twentytwo;
					}
				}
				printf("Sorry, you lose!! The number is %d.\n", RandomNum);
				goto twentytwo;
			}
			printf("Thank you, Goodbye!!\n");
			goto nineteen;
		}
		else if (select == 4)
		{
			time_t t;
			char ans;
			int guess;
			int i = 20;

			printf("Welcome to the Addition Game!!\n");
		twentythree: printf("Do you want to play?? Enter Y/n: \n");
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
						goto twentythree;
					}
				}
				printf("Sorry, you lose!! The answer is %d.\n", answer);
				goto twentythree;
			}
			printf("Thank you, Goodbye!!\n");
			goto nineteen;
		}
		else if (select == 5)
		{
			time_t t;
			char ans;
			int guess;
			int i = 15;

			printf("Welcome to the Multiplication Game!!\n");
		twentyfour: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			while (ans == 'Y')
			{
				srand((unsigned int) time(&t));
				int RandomNumOne = rand() % 51;
				int RandomNumTwo = rand() % 51;
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
						goto twentyfour;
					}
				}
				printf("Sorry, you lose!! The answer is %d.\n", answer);
				goto twentyfour;
			}
			printf("Thank you, Goodbye!!\n");
			goto nineteen;
		}
		else if (select == 6)
		{
			time_t t;
			char ans;
			int guess;
			int i = 20;

			printf("Welcome to the Subtraction Game!!\n");
		twentyfive: printf("Do you want to play?? Enter Y/n: \n");
			scanf(" %c", &ans);
			while (ans == 'Y')
			{
				srand((unsigned int) time(&t));
				int RandomNumOne = rand() % 1001;
				int RandomNumTwo = rand() % 1001;
				int answer = RandomNumOne - RandomNumTwo;

				for (i = 20; i > 0; i--)
				{
					printf("You have %d tr%s.\n", i, i == 1 ? "y" : "ies");
					printf("%d - %d = \n", RandomNumOne, RandomNumTwo);
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
						goto twentyfive;
					}
				}
				printf("Sorry, you lose!! The answer is %d.\n", answer);
				goto twentyfive;
			}
			printf("Thank you, Goodbye!!\n");
			goto nineteen;
		}
		else if (select == 7)
		{
			printf("Thank You, Goodbye Friend!!\n\n");
			goto one;
		}
		else
			goto nineteen;
	}
	else if (choice == 5)
	{
		printf("Goodbye Friend!!\n\n");
	}
	else
		goto one;
}
