/******************************************************************************
 *  Author: Holly Switzer
 *   Date: 4/19.17
 *    Description: Implement file Snack- Program will illustrate a vending machine.
 *     ************************************************************************/

#include <iostream>
#include "Snack.hpp"

using namespace std;

Snack:: Snack ()
{
    name = "Bottled Water";
    price = 1.75;
    calories = 0;
}

Snack:: Snack (string x, double y, int z)
{
    name = x;
    price = y;
    calories = z;
}

string Snack::getName()
{
    return name;
}

double Snack::getPrice()
{
    return price;
}

int Snack::getCalories()
{
    return calories;
}

