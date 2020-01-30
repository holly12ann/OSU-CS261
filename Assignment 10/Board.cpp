
#include "Board.hpp"
#include <iostream>

using namespace std;

Board::Board ()
{
    //loop both the rows and columns
    for (int x=0; x<3; x++)
    {
        for (int y=0; y<3; y++)
        {
            locArray[x][y]= ' ';
        }
    }
};

bool Board::makeMove(int x, int y, char p)
{
    //position is open
    if (locArray [x][y] == ' ')
    {
        if (p == 'O'|| p == 'o')
            locArray [x][y]= 'O';
        
        else
            locArray [x][y]= 'X';
        
        return true;
    }
    
    //position has alreaady been used
    else
        return false;
};

score Board::gameState ()
{
    score result;
    
    //rotate coord position to find 3 in a row either horizontally or vertical
    for (int x=0; x<3; x++)
    {
        if ((locArray [x][0] == locArray[x][1]) && (locArray[x][1] == locArray [x][2]))
            {
                if (locArray [x][0] == 'X')
                    result=Winner_X;
                
                else if (locArray [x][0] == 'O')
                    result= Winner_O;
            }
            
        else if((locArray [0][x] == locArray[1][x]) && (locArray[1][x] == locArray [2][x]))
            {
                if (locArray [0][x] == 'X')
                    result= Winner_X;
            
                else if (locArray [0][x] == 'O')
                    result= Winner_O;
            }
    }
    
    //find diagonal match
    if ((locArray [0][0] == locArray [1][1]) && (locArray [1][1]==locArray [2][2]))
        {
            if (locArray [0][0] == 'X')
                result= Winner_X;
        
            else if (locArray [0][0] == 'O')
                result= Winner_O;
        }
    
    else if ((locArray [0][2] == locArray [1][1]) && (locArray [1][1] == locArray [2][0]))
        {
            if (locArray [0][2] == 'X')
                result=Winner_X;
        
            else if (locArray [0][2] == 'O')
                result= Winner_O;
        }
    
    //if there is no winner, calculate if game is still in progress or it was a draw
    else if (result != Winner_O && result != Winner_X)
    {
        int count=0;
        
        for (int x=0; x<3; x++)
        {
            for (int y = 0; y<3; y++)
            {
                
                if (locArray[x][y] == ' ')
                    result=In_progress;
            
                else
                    count++;
                
            }
        }
        //all spaces have been used
        if (count==9)
            result=Draw;
    }
    return result;
};

void Board::print ()
{
    cout <<"     0   1   2 \n";
    cout <<" 0   "<<locArray[0][0]<<" | "<<locArray[0][1]<<" | "<<locArray[0][2]<<" \n";
    cout <<"   - - - - - - -\n";
    cout <<" 1   "<<locArray[1][0]<<" | "<<locArray[1][1]<<" | "<<locArray[1][2]<<" \n";
    cout <<"   - - - - - - -\n";
    cout <<" 2   "<<locArray[2][0]<<" | "<<locArray[2][1]<<" | "<<locArray[2][2]<<" \n\n";
};
