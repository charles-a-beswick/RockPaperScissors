/*
Created as part of a Codecademy course.

	Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
	Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
	Compares the user’s choice and the computer’s choice and determine the winner.
	Informs the user who the winner is.

Logic:
	Scissors cuts Paper.
	Paper covers Rock.
	Rock crushes Lizard.
	Lizard poisons Spock.
	Spock smashes Scissors.
	Scissors decapitate Lizard.
	Lizard eats Paper.
	Paper disproves Spock.
	Spock vaporizes Rock.
	Rock crushes Scissors.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	srand(time(NULL));
	int computer = rand() % 5 + 1;

	int user = 0;

	cout << "===================================" << endl;
	cout << " Rock paper scissors lizard spock!" << endl;
	cout << "===================================" << endl;
	cout << " 1) Rock  \n 2) Paper  \n 3) Scissors  \n 4) Lizard  \n 5) Spock  " << endl;

	cin >> user;

	if (computer == user) {
		cout << "It's a draw!" << endl;
	}
	else if (computer == 1) {
		if (user == 2 || user == 5) {
			cout << "User wins!" << endl;;
		}
		else {
			cout << "Computer wins!" << endl;
		}
	}
	else if (computer == 2) {
		if (user == 3 || user == 4) {
			cout << "User wins!" << endl;
		}
		else {
			cout << "Computer wins!" << endl;
		}
	}
	else if (computer == 3) {
		if (user == 1 || user == 5) {
			cout << "User wins!" << endl;
		}
		else {
			cout << "Computer wins!" << endl;
		}
	}
	else if (computer == 4) {
		if (user == 1 || user == 3) {
			cout << "User wins!" << endl;
		}
		else {
			cout << "Computer wins!" << endl;
		}
	}
	else if (computer == 5) {
		if (user == 2 || user == 4) {
			cout << "User wins!" << endl;
		}
		else {
			cout << "Computer wins!" << endl;
		}
	}

	string pcName;

	//Give string name to numbers for PC
	if (computer == 1) {
		pcName = "Rock";
	}
	else if (computer == 2) {
		pcName = "Paper";
	}
	else if (computer == 3) {
		pcName = "Scissors";
	}
	else if (computer == 4) {
		pcName = "Lizard";
	}
	else if (computer == 5) {
		pcName = "Spock";
	}

	string uName;
	//Give string name to numbers for User

	if (user == 1) {
		uName = "Rock";
	}
	else if (user == 2) {
		uName = "Paper";
	}
	else if (user == 3) {
		uName = "Scissors";
	}
	else if (user == 4) {
		uName = "Lizard";
	}
	else if (user == 5) {
		uName = "Spock";
	}


	cout << "Computer: " << pcName << "\nUser: " << uName << endl;


}
