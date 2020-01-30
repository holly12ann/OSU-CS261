
#include "Board.hpp"

#ifndef TicTacToe_HPP
#define TicTacToe_HPP

class TicTacToe
{
private:
    Board obj;
    char track;
    
public:
    TicTacToe(char p);
    void play (char p);
};

#endif
