/********************************
 * Author: Holly Switzer
 * Date: 4/12/17
 * Description: This program will represent a hailstone sequence.
 * ****************************/

#include <iostream>

using namespace std;


	int num;

	do
		{
		cout<<"Enter number.\n";
		cin>> num;
		}

		while (num == 1);
			{
			return 0;	
			}
	
		while (num %2==0);
			{
			num = num/2;
			}

		while (num *= 3+1)
			{
			num = num * 3 + 1;
			}
		
		return 1;

			

