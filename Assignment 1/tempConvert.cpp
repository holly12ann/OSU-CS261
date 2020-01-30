/**********************************************
 * Author: Holly Switzer
 * Date: 4/6/17
 * Description: This program converts Celcius temperatures to Fahrenheit temperatures
 * ******************************************/

#include <iostream>
#include  <string>
using namespace std;

int main ()
{
	int C;
	double F;
	
	//input for Celcius
	std::cout << "Please enter a Celsius temperature." <<std::endl;
	std::cin >> C;
	
	//equation for Fahrenheit
	F = ((9/5) * C) + 32;
	std::cout << "The equivalent Fahrenheit temperature is:" <<std::endl;
	std::cout << F <<std::endl;

	return 0;
}

