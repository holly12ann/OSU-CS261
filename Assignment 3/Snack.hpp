/****************************************************************************** 
 Author: Holly Switzer
 Date: 4/19.17
 Description: Header file Snack- Program will illustrate a vending machine.
 ******************************************************************************/

#ifndef Snack_HPP
#define Snack_HPP
#include <string>

using namespace std;


class Snack
{
private:
    string name;
    double price;
    int calories;
    
public:
    Snack ();
    Snack (string x, double y, int z);
    string getName();
    double getPrice();
    int getCalories();
};

#endif 
