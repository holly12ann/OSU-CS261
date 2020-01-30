/********************************************************
 * Author: Holly Switzer
 * Date: 4/6/17
 * Description: This program will represent the amound of fewest coins needed
 * ****************************************************/

#include <iostream>
#include <string>
using namespace std;

int main ( )
{
	//Establish cent amount
	int cents;
	std::cout <<"Please enter an amount in cents less than a dollar." <<std::endl;
	std::cin >> cents;

	//Computing coin amounts
	int Q = cents/25;
	int D = (cents - (25*Q))/10;
	int N = (cents-((25*Q)+(10*D)))/5;
	int P = (cents-((25*Q)+(10*D)+(5*N)))/1;

	//Output
	std::cout << "Your change will be:" <<std::endl;
	std::cout << "Q:" << Q <<std::endl;
	std::cout << "D:" << D <<std::endl;
	std::cout << "N:" << N <<std::endl;
	std::cout << "P:" << P <<std::endl;

	return 0;
}

