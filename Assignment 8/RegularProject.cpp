//
//  RegularProject.cpp
//  customerProject
//
//  Created by Holly Switzer on 5/23/17.
//  Copyright © 2017 Holly Switzer. All rights reserved.
//
#include "CustomerProject.hpp"
#include "RegularProject.hpp"

double RegularProject::billAmount() const
{
    return ((80*(hours)) + (materials)+ (transportation));
}

