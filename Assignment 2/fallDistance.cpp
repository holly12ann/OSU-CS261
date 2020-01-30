/*******************************
 * Author: Holly Switzer
 * Date: 4/12/17
 * Description: This program will determine the distance an object falls through gravity in a specific time period.
 * ****************************/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void fallingDistance(const double g,int t, double d) 
	{
	d=((1/2) * g * pow (t, 2.0));
	}

	int t;
	double d;
	const double g=9.8;
	
	//Prompt for t value
	cout<<"Enter time.\n";
	cin>>t;

	//calculate distance
	fallingDistance(g, t, d);
	
	
	
	//display distance
	cout<< "d= " << d <<showpoint<<setprecision(1) <<endl;
	
	

return 0;

