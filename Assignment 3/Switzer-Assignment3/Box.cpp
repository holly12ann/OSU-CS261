/*****************************************************
 * Author: Holly Switzer
 * Date: 4/18/17
 * Description: This program will implement the box class and calculate
 *              the volume and area.
 ****************************************************/
#include <iostream>
#include "Box.hpp"

using namespace std;

Box::Box ( ) 
   {
	height = 1;
	width = 1;
	length = 1;
   }

Box::Box (double H, double W, double L)
   {
	setHeight (H);
	setWidth (W);
	setLength (L);
   }

void Box::setHeight (double H)
   {
	height = H;
   }

void Box::setWidth (double W)
   {
	width= W;
   }

void Box::setLength (double L)
   {
	length=L;
   }

double Box::calcVolume ()
   {
	return height*width*length;
   }

double Box::calSurfaceArea ()
   {
	return (2*height*width)+(2*height*length)+(2*width*length);
   }


