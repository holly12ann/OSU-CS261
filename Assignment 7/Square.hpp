/***********************************************************
 * Author:Holly Switzer
 * Date: 5/13/17
 * Description: Header File for Square Class
 * **********************************************************/

#include "Rectangle.hpp"

#ifndef Square_HPP
#define Square_HPP

class Square: public Rectangle
{
private:
    double x;
public:
    Square (double x): Rectangle(x,x){};
    void setLength(double x);
    void setWidth(double x);
};

#endif
