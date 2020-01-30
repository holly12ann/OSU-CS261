/***********************************************************************
 Author: Holly Switzer
 Date: 6/7/17
 Description: This file is the implementation file for TicTacToe and 
 the main function to run a simple tic-tac-toe game.
 **********************************************************************/

#include "TicTacToe.hpp"
#include "Board.hpp"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe(char p)
{
    track=p;
};

void TicTacToe::play (char p)
{
    cout<<"entered PLAY function\n\n";
    
    int xCoord, yCoord;
    bool temp=false;
    
    //keep track of players
    track = p;
    
    //while there is not a winner
    while (temp==false)
    {
        cout<<"Game Board\n\n";
        obj.print();
        
        //Prompt player X for coords
        if (track== 'X'|| track == 'x')
        {
            cout << "Player X: Please enter your x coordinate.\n";
            cin >> xCoord;
            cout << "Player X: Please enter your y coordinate.\n";
            cin >> yCoord;
            cout << endl;
        }
    
        //Prompt playes O for coords
        else if (track == 'O'||track=='o')
        {
            cout << "Player O: Please enter your x coordinate.\n";
            cin >> xCoord;
            cout << "Player O: Please enter your y coordinate.\n";
            cin >> yCoord;
            cout << endl;
        }
        
        //Coords have already been used
        if (obj.makeMove(xCoord, yCoord, track)==false)
        {
            cout<< "That position has been taken. Here is the board again.\n\n";
            
            //prepare for switch at end of while to keep the same player
            if (track== 'X'|| track == 'x')
                track = 'O';
            
            else if (track== 'O'|| track == 'o')
                track='X';
        }
        
        //exit while if there is a winner or Draw
        else if (obj.gameState() == Winner_X || obj.gameState() == Winner_O || obj.gameState() == Draw)
            temp=true;
        
        //change to next player
        if (track == 'O'||track=='o')
            track = 'X';
        
        else if (track == 'X'||track=='x')
            track ='O';
    }
    
    //find the winner or game status
    if (obj.gameState() == Winner_X)
        cout<< "Player X is the WINNER!\n";
    else if (obj.gameState() == Winner_O)
        cout<< "Player O is the WINNER!\n";
    
    else if (obj.gameState() == Draw)
        cout << "DRAW!\n";
    
    else if (obj.gameState() == In_progress)
        cout << "Game is still in progress\n";
};



int main ()
{
    char p, replay;

    bool key=false;
    
    while (key==false)
    {
        cout<< "Which player will go first? X or O\n";
        cin >> p;
        
        TicTacToe game (p);
        
        game.play(p);
        
        cout<< "Would you like to play again? Y or N\n";
        cin>>replay;
        
        if (replay=='N'||replay=='n')
            key=true;
    }
    
    
}
