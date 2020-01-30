/***********************************************************
 * Author:Holly Switzer
 * Date: 5/13/17
 * Description: Header file- This program will find the 
 * area and perimeter for a square or rectangle
 * **********************************************************/

#ifndef Rectangle_HPP
#define Rectangle_HPP

class Rectangle
{
private:
    double length, width;
    
public:
    void setLength(double l);
    void setWidth(double w);
    Rectangle (double l, double w);
    double area ();
    double perimeter ();
};

#endif

