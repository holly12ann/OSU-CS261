 /******************************************************************************
 Author: Holly Switzer
 Date: 4/19.17
 Description: Implement file MiniVend- Program will illustrate a vending machine.
 ******************************************************************************/


#include <iostream>
#include <string>
#include "MiniVend.hpp"
#include "VendSlot.hpp"
#include "Snack.hpp"

using namespace std;

MiniVend::MiniVend (VendSlot a, VendSlot b, VendSlot c, VendSlot d, double e)
{
    VS1=a;
    VS2=b;
    VS3=c;
    VS4=d;
    money=e;
}

double MiniVend::getMoney()
{
    return money;
}

int MiniVend::numEmptySlots()
{
    int EmptySlots=0;
    
    if (VS1.getAmount() == 0)
    {
        EmptySlots++;
    }
    else;
    
    if (VS2.getAmount() == 0)
    {
        EmptySlots++;
    }
    else;
    
    if (VS3.getAmount() == 0)
    {
        EmptySlots++;
    }
    else;
    
    if (VS4.getAmount() == 0)
    {
        EmptySlots++;
    }
    else;
    
    return EmptySlots;
    
}

Snack MiniVend::valueOfSnacks ()
{
    return (VS1.getAmount()* VS1.getPrice(int&))+(VS2.getAmount()* VS2.getPrice())+(VS3.getAmount()* VS3.getPrice())+(VS4.getAmount()* VS4.getPrice(int&));            
}

int MiniVend::buySnack(VendSlot VS)
{
    if(VS.getAmount() >=0)
    {
        VS.decrementAmount();
        return getMoney() += getPrice;
    }
    else;
}
