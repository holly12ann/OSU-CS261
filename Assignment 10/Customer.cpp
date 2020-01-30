/****************************************************************************************
 Author:Holly Switzer
 Date:6/8/17
 Description: Implementation for Customer
 ***************************************************************************************/

#include <iostream>
#include "Customer.hpp"
#include "Product.hpp"

using namespace std;

Customer::Customer(string n, string a, bool pm)
{
    name=n;
    accountID=a;
    premiumMember=pm;
};

string Customer::getAccountID()
{
    return accountID;
};

vector<string> Customer::getCart()
{
    return cart;
};

void Customer::addProductToCart(string ap)
{
    cart.push_back(ap);
};

bool Customer::isPremiumMember()
{
    if (premiumMember==true)
        return true;
    
    else
        return false;
};

void Customer::emptyCart()
{
    cart.clear();
};
