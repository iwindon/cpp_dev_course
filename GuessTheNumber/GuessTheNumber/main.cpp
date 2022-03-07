#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(NULL));
	bool guessedNumber = false; // added after my try
	int numGuess = 0;
	int guess = 0;
	int randomNum = rand()%100 + 1;


	while (!guessedNumber)
	{
		cout << "Enter a number from 1 to 100 inclusive: ";
		cin >> guess;

		if (guess > 100 || guess < 1)
		{
			cout << "That was a wasted guess, You must pick a number between 1 and 100.\n";
			numGuess++;
			continue;
		}
		if (guess == randomNum)
		{
			cout << "You guessed the correct number in " << numGuess << " tries.\n";
			cout << "Thanks for playing!\n";
			guessedNumber = true;
		}
		else if (guess < randomNum)
		{
			cout << "You guessed too low, try again.\n";
		}
		else
		{
			cout << "You guessed too high, try again.\n";
		}
		numGuess++;

	}

	return 0;
}