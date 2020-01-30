/******************************************************************************
 *  Author: Holly Switzer
 *   Date: 4/19.17
 *    Description: Header file VendSlot- Program will illustrate a vending machine.
 *     ******************************************************************************/
#include "Snack.hpp"

#ifndef VendSlot_HPP
#define VendSlot_HPP

class VendSlot
{
private:
    Snack aSnack;
    int amount;
    
public:
    VendSlot ();
    VendSlot (Snack x, int y);
    Snack getSnack();
    int getAmount();
    int decrementAmount();
    
};
#endif
