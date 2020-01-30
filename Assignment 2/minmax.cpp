/****************************************
 * Author: Holly Switzer
 * Date: 4/12/17
 * Description:This program will allow the user to input a specified number of integers and then will compute the min and max.
 * **************************************/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	int num, integer,x,
	min= std::numeric_limits <int>::min (),
	max= std::numeric_limits <int>::max ();

	//prompt user for number of integers 
	cout << "How many integers would you like to enter?\n";
	cin >> num;
	cout << "Please enter " << num << " integers.\n";
	
	//Loop for amount of input
	for (x=1; x<= num; x++)
		{
		cin >> integer;
		
			
		if (integer < max)
			{
			min=integer;
			}
		else (integer > max);
			{
			max=integer;
			}
		}
	cout<< "min: " <<min <<endl;
	cout<< "max: " <<max <<endl; 
	

	return 0;
}
