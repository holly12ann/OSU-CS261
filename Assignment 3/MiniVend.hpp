 /*******************************************************************************
 Author: Holly Switzer
 Date: 4/19.17
 Description: Header file MiniVend- Program will illustrate a vending machine.
 **********************************************************************************/



#include "Snack.hpp"
#include "VendSlot.hpp"
#ifndef MiniVend_HPP
#define MiniVend_HPP

class MiniVend
{
private:
    VendSlot VS1, VS2, VS3, VS4;
    double money;
    
public:
    MiniVend (VendSlot a, VendSlot b, VendSlot c, VendSlot d, double e);
    double getMoney();
    int numEmptySlots ();
    Snack valueOfSnacks ();
    int buySnack (VendSlot VS);
};

#endif
