#include <iostream>
#include <cstdlib>
#include "tictactoe.h"
//

using namespace std;
int main() {
    tictactoe game;
    game.clearBoard();

    game.putMark(0,0); // X
    cout<<game<<"\n\n";
    game.putMark(0,1); // O
    cout<<game<<"\n\n";
    game.putMark(2,0); //X
    cout<<game<<"\n\n";
    game.putMark(2,2); //O
    cout<<game<<"\n\n";
    game.putMark(1,0); //X
    cout<<game<<"\n\n";


    return EXIT_SUCCESS;
}
