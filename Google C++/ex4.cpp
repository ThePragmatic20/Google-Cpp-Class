
// guess.cpp.  Rafael Moura
// Description: A guessing game where the player guesses
// the secret number.

#include <iostream>
#include <time.h>
using namespace std;

int main () {
	int rand_number,guess;

	//Initialize the seed
	srand(time(NULL));

	//Generate a random number between 1 and 100
	rand_number = rand() % 100 + 1;

	cout << "Guess a Number (1 to 100)";
	if(!(cin >> guess))
	{
		cout << "please enter only numbers" << endl;
	}else
	{
		if (rand_number < guess) cout << "The secret Number is Lower than " << guess << endl;
		else if (rand_number > guess) cout << " The secret Number is higher  than " guess << endl;
		else cout << "You guessesd it!: " << rand_number << endl;

	}
	cout << "Random: " << rand_number << endl;
	return 0;
}
