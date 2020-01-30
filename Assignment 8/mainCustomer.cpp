//
//  main.cpp
//  customerProject
//
//  Created by Holly Switzer on 5/23/17.
//  Copyright © 2017 Holly Switzer. All rights reserved.
//

#include <iostream>
#include "CustomerProject.hpp"
#include "RegularProject.hpp"
#include "PreferredProject.hpp"

using namespace std;

int main()
{
    int size=3;
    CustomerProject *cp [] =
        {
            new RegularProject (5,10,15),
            new PreferredProject (100, 10, 20),
            new PreferredProject (300, 10, 20)
        };
    
    for (int x=0; x<size; x++)
    {
        cout<< cp[x]->billAmount()<< endl;
        cout <<"Hours: "<<cp[x]->getHours()<< "\n";
        cout <<"Materials: "<<cp[x]->getMaterials()<< "\n";
        cout <<"Transportation: "<<cp[x]->getTransportation()<< "\n";
    }
    
    
    return 0;
}
