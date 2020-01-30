/***********************************
 * Author: Holly Switzer
 * Date: 4/6/17
 * Description: This program will average 5 number that the user inputs
 * *********************************/

#include <iostream>
#include <string>
using namespace std;

//averaging program of 5 numbers

int main ()
{
	int number1, number2, number3, number4, number5;
	double sum;
	double avg;

	std::cout << "Please enter five numbers." << std::endl;
	std::cin >> number1;
	std::cin >> number2;
	std::cin >> number3;
	std::cin >> number4;
	std::cin >> number5;
	
	sum = number1 + number2 + number3 + number4 + number5;
	avg = sum / 5;
	std::cout << "The average of those numbers is:"  << std::endl;
	std::cout << avg << std::endl;	

	return 0;
}
