/********************************************************
 * Author: Holly Switzer
 * Date:4/19/17
 * Description: Interface file- This program will calulate the distance
 * 		traveled for a taxicab.
 * ******************************************************/

#ifndef Taxicab_HPP
#define Taxicab_HPP

class Taxicab
{
    private:
        int xCoord;
        int yCoord;
        int distance;
    public:
        Taxicab ();
        Taxicab (int x, int y);
        int getX ( );
        int getY ( );
        int getDistanceTraveled ();
        int moveX (int x);
        int moveY (int y);
};
#endif 
