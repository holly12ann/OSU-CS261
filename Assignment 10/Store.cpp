/****************************************************************************************
 Author:Holly Switzer
 Date:6/8/17
 Description:Implementation file for Store
 ***************************************************************************************/

#include "Product.hpp"
#include "Customer.hpp"
#include "Store.hpp"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>


using namespace std;

void Store::addProduct(Product* p)
{
    inventory.push_back (p);
};

void Store::addMember(Customer* c)
{
    members.push_back(c);
};

Product* Store::getProductFromID(string pid)
{
    for (int x=0; x< inventory.size(); x++)
    {
        if (inventory[x]->getIdCode() == pid)
            return inventory[x];
    }
    
    return NULL;
};

Customer* Store::getMemberFromID(string mid)
{
    for (int x=0; x< members.size(); x++)
    {
        if (members[x]->getAccountID() == mid)
            return members[x];
    }
    
    return NULL;

};

void Store::productSearch(string str)
{
    int size=inventory.size();
    string tempT, tempD;
    string *cTitle[size], *cDes[size];
    
    //make str lowercase for case insensitivity
    for (int a=0; a<str.length(); a++)
        str[a] = tolower(str[a]);
    
    //copy titles and descriptions to temp strings
    for (int x=0; x<inventory.size(); x++)
    {
        tempT=inventory[x]->getTitle();
        tempD=inventory[x]->getDescription();
        
        //convert temp stings into lowercase for case insensitivity
        for (int y=0; y<tempT.length(); y++)
            tempT[y]=tolower(tempT[y]);
        
        for (int z=0; z<tempD.length(); z++)
            tempD[z]=tolower(tempD[z]);

        //add lowercase string to array pointer
        cTitle[x]=&tempT;
        cDes[x]=&tempD;
        
        if (cTitle[x]->find(str) != string::npos ||cDes[x]->find(str) != string::npos)
        {
            cout<< "Title:"<<inventory[x]->getTitle()<<endl;
            cout<< "ID Code:"<<inventory[x]->getIdCode()<<endl;
            cout<< "Price: $"<<fixed<<setprecision(2)<<inventory[x]->getPrice()<<endl;
            cout<< "Description:"<<inventory[x]->getDescription()<<endl;
        }
    }
};

void Store::addProductToMemberCart(string pID,string mID)
{
    //product not in inventory
    if (getProductFromID(pID)==NULL)
        cout<< "Product #"<<pID<< "not found.\n";

    //not a member
    else if (getMemberFromID(mID)==NULL)
        cout<< "Member #"<<mID<< "not found.\n";
    
    //member and product in inventory
    else if (getProductFromID(pID)!=NULL && getMemberFromID(mID)!=NULL)
    {
        for (int x=0; x<inventory.size(); x++)
        {
            if (inventory[x]->getIdCode()==pID)
            {
                if (inventory[x]->getQuantityAvailable() >= 1)
                {
                    for (int y =0; y<members.size(); y++)
                    {
                        if (members[y]->getAccountID()==mID)
                            members[y]->addProductToCart(pID);
                    }
                }
                else
                    cout<< "Sorry, product #"<<pID<<"is currently out of stock";
            }
        }
    }
};

void Store::checkOutMember(string mID)
{
    //not a member
    if (getMemberFromID(mID)==NULL)
        cout<< "Member #"<<mID<< "not found.\n";

    else
    {
        Customer *c;
        c=getMemberFromID(mID);
        
        vector <string> checkout;
        Product *p;
        double subtotal=0, shipping=0;
        
        checkout=c->getCart();
        
        //cart is empty
        if (checkout.size() == 0)
            cout<<"There are no items in the cart.\n";
        
        for (int y=0; y<checkout.size(); y++)
            {   
                p=getProductFromID(checkout[y]);
                
                //out of stock for product
                if (p->getQuantityAvailable() <1)
                    cout<< "Sorry, product #"<<p->getIdCode()<< " , "<< p->getTitle()<< " is no longer available.\n";
                else
                {
                    cout<< "Title:"<<p->getTitle()<<endl;
                    cout<< "Price: $"<<fixed<<setprecision(2)<<p->getPrice()<<endl;
                    subtotal += p->getPrice();
                }
                
                //customer took product, need to decrease the quantity available
                p->decreaseQuantity();
            }
        
        //find premium members to set to free shipping
        if (c->isPremiumMember() == true)
            shipping = 0;
                
        else
            shipping = .07*subtotal;
        
        cout << "Subtotal: $"<<fixed<<setprecision(2)<< subtotal<< endl;
        cout << "Shipping: $"<<fixed<<setprecision(2)<< shipping<< endl;
        cout << "TOTAL:    $"<<fixed<<setprecision(2)<< (subtotal + shipping)<<endl;
        
        //empty the members cart
        for (int i=0; i<members.size(); i++)
        {
            if (members[i]->getAccountID() == mID)
                members[i]->emptyCart();
        }
        
    }
};
