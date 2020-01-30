//
//  customerProject.cpp
//  customerProject
//
//  Created by Holly Switzer on 5/23/17.
//  Copyright © 2017 Holly Switzer. All rights reserved.
//

#include "CustomerProject.hpp"

CustomerProject::CustomerProject (double x, double y, double z)
{
    setHours(x);
    setMaterials(y);
    setTransportation(z);
}
void CustomerProject::setHours(double x)
{
    hours=x;
}

double CustomerProject::getHours()
{
    return hours;
}

void CustomerProject::setMaterials(double x)
{
    materials=x;
}

double CustomerProject::getMaterials()
{
    return materials;
}

void CustomerProject::setTransportation(double x)
{
    transportation=x;
}

double CustomerProject::getTransportation()
{
    return transportation;
}
