//
// Created by StudentLoaner on 9/23/2022.
//

#include "tictactoe.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void tictactoe::clearBoard() {
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            board[i][j]=EMPTY;
            currentplayer=X;
        }
    }
}
void tictactoe::putMark(int i,int j){
    board[i][j]=currentplayer;
    currentplayer= -currentplayer;
}
bool tictactoe::isWin(int mark) {
    int win= 3*mark;
    return((board[0][0]+board[0][1]+board[0][2]==win)
    ||(board[1][0]+board[1][1]+board[1][2]==win)
    ||(board[2][0]+board[2][1]+board[2][2]==win)
    ||(board[0][0]+board[1][0]+board[2][0]==win)
    ||(board[0][1]+board[1][1]+board[2][1]==win)
    ||(board[0][2]+board[1][2]+board[2][2]==win)
    ||(board[0][0]+board[1][1]+board[2][2]==win)
    ||(board[2][0]+board[1][1]+board[0][2]==win));
}

int tictactoe::getWinner() {
    if(isWin(X)){
        return  X;

    } else if(isWin(O)){
        return  O;
    }
    else return EMPTY;
}
void tictactoe::printBoard() {
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            switch (board[i][j]) {
                case X: cout<<"X"; break;
                case O: cout<<"O"; break;
                case EMPTY: cout<<" "; break;
            }
            if(j<2) {
                cout << "|";
            }
        }
        if(i<2) {
            cout << " \n-+-+-\n";
        }
    }
}
ostream &operator<<(ostream& os, tictactoe obj){
  obj.printBoard();
}