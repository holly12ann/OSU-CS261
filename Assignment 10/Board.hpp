/*******************************************************************************************
 Author: Holly Switzer
 Date: 6/7/17
 Description: Board Header File
 ******************************************************************************************/
#include <iostream>

using namespace std;

#ifndef Board_HPP
#define Board_HPP

enum score{Winner_X, Winner_O, Draw,  In_progress};

class Board
{
private:
    char locArray[3][3];
    
public:
    Board ();
    bool makeMove(int x, int y, char p);
    score gameState ();
    void print ();
};

#endif
