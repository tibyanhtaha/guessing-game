#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
 
//guessing game program using loops and branches
int main() {

	//declare variables
	int randNum;
	int userGuess;
	
	srand(time(0));

	//greet user
	cout << "Welcome to Tibyan's Guess My Number Game!" << endl;
	
	//ask for a random number and get input
	cout << "\nGuess a number from 1 to 20:" << endl;
	cin >> userGuess;

	//random number generator
	randNum = rand() % 20 + 1;

	//loop for checking wrong numbers
	while (userGuess != randNum) {

		if (userGuess > randNum) {
			cout << "That's too high. Guess again" << endl;
			cin >> userGuess;
		}
		else if (userGuess < randNum) {
			cout << "That's too low. Guess again" << endl;
			cin >> userGuess;
		}
	}

	//if statement for correct number
	if (userGuess == randNum) {
		cout << "Yes! The answer was " << userGuess << "." << endl;

		//nice message goodbye
		cout << "\nThanks for playing!" << endl;

	}


	return 0;
}