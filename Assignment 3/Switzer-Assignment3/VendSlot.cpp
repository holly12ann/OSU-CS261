/******************************************************************************
 *  Author: Holly Switzer
 *   Date: 4/19.17
 *    Description: Implement file VendSlot- Program will illustrate a vending machine.
 *     ******************************************************************************/

#include <iostream>
#include "VendSlot.hpp"
#include "Snack.hpp"

VendSlot::VendSlot()
{
    aSnack = Snack::Snack();
    amount = 5;
}

VendSlot::VendSlot (Snack x, int y)
{
    aSnack = x;
    amount =y;
}

Snack VendSlot:: getSnack()
{
    return aSnack;
}

int VendSlot::getAmount()
{
    return amount;
}

int VendSlot::decrementAmount()
{
    amount -= 1;
    return amount;
}
