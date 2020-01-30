//
//  PreferredProject.cpp
//  customerProject
//
//  Created by Holly Switzer on 5/23/17.
//  Copyright © 2017 Holly Switzer. All rights reserved.
//
#include "CustomerProject.hpp"
#include "PreferredProject.hpp"

double PreferredProject::billAmount() const
{
    if (hours>=100)
        return (80*(100) + .85*(materials)+ .90*(transportation));
    
    else
         return (80*(hours) + .85*(materials)+ .90*(transportation));
}

