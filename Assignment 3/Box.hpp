/*****************************************************
 * Author: Holly Switzer
 * Date: 4/18/17
 * Description: This program will develop a header file for the class Box.
 * **************************************************/

#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box
{
	private:
		double height;
		double width;
		double length;
	public:
		Box ();
		Box (double height, double width, double length);
		void setHeight(double H);
		void setWidth(double W);
		void setLength(double L);
		double calcVolume ();
		double calSurfaceArea ();
};
#endif
			

