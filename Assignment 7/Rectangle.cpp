/***********************************************************
 * Author:Holly Switzer
 * Date: 5/13/17
 * Description: This is the Implementation file for Rectangle class
 * **********************************************************/

#include "Rectangle.hpp"
#include <iostream>

using namespace std;

void Rectangle::setLength(double l)
{
    length = l;
}

void Rectangle:: setWidth (double w)
{
    width = w;
}

Rectangle::Rectangle (double l, double w)
{
    setLength(l);
    setWidth(w);
}

double Rectangle::area()
{
    return (length * width);
}

double Rectangle:: perimeter()
{
    return ((2*length) + (2* width));
}

