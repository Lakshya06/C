#include <stdio.h>

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkForWin();
void displayBoard();
void markBoard(char mark);


void main()
{


}

int checkForWin()
{

    int returnValue = 0;

    if(square[1] == square[2] && square[2] == square[3])
        returnValue = 1;

    else if(square[4] == square[5] && square[5] == square[6])
        returnValue = 1;

    else if(square[7] == square[8] && square[8] == square[9])
        returnValue = 1;

    else if(square[1] == square[4] && square[4] == square[7])
        returnValue = 1;

    else if(square[2] == square[5] && square[5] == square[8])
        returnValue = 1;

    else if(square[3] == square[6] && square[6] == square[9])
        returnValue = 1;

}