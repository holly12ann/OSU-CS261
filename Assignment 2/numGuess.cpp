/******************************************
 * Author: Holly Switzer
 * Date 4/12/17
 * Description: This program will simulate a guessing game where one user inputs a number and another user will try to guess.
 * ***************************************/

#include <iostream>

using namespace std;

int main ()
{
	int number, userNum, guesses=0;

	//prompt user 1 to enter number
	cout<<"Enter the number for the player to guess.\n";
	cin>>number;

	//prompt user 2 to guess
	cout<< "Enter your guess\n";
	
	do
		{
		guesses++;
		cin>>userNum;

	 	if(userNum > number)
			cout<<"Too High - Try Again.\n";
		else if (userNum < number)
			cout << "Too Low - Try Again.\n";
		else
			cout<< "You Got It!\n";
		}
		
	while (userNum != number);

	cout << "You guessed it in "<<guesses<<" tries.\n";

	return 0;

}
