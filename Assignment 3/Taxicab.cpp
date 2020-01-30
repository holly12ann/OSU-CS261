/***************************************************************************
 * Author:Holly Switzer
 * Date: 4/19/17
 * Description: Implementation file- This program will calculate the distance
 * 		traveled for a taxicab.
 * ************************************************************************/

#include <iostream>
#include "Taxicab.hpp"
#include <cmath>

using namespace std;


Taxicab::Taxicab ()
{
    xCoord = 0;
    yCoord = 0;
    distance = 0;
}

Taxicab::Taxicab (int x, int y)
{
    xCoord = x;
    yCoord = y;
    distance = abs(xCoord) + abs(yCoord);
}

int Taxicab::getX ()
{
    return xCoord;
}

int Taxicab::getY ()
{
    return yCoord;
}

int Taxicab::getDistanceTraveled ()
{
    distance= xCoord + yCoord;
    return distance;
}

int Taxicab::moveX (int x)
{
    xCoord += abs(x);
    return xCoord;
}

int Taxicab::moveY (int y)
{
    yCoord += abs(y);
    return yCoord;
}

