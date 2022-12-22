//
// Created by StudentLoaner on 9/23/2022.
//

#ifndef TIC_TAC_TOE_TICTACTOE_H
#define TIC_TAC_TOE_TICTACTOE_H
#include <iostream>
#include <cstdlib>
using namespace std;

class tictactoe {
public:
    static const int X=1, O=-1, EMPTY=0;
    int board[3][3];
    void clearBoard();
    void putMark(int i, int j);
    int getWinner();

    friend  ostream &operator<<(ostream &os,tictactoe board);

protected:
    bool isWin(int mark);
    void printBoard();
    int currentplayer;


};


#endif //TIC_TAC_TOE_TICTACTOE_H
