/**********************************
 * Author: Holly Switzer
 * Date: 4/6/17
 * Description: This program will display the favorite animal of the user
 * *******************************/

#include <iostream>
#include <string>

//a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}
