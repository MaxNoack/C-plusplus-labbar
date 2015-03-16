#include "BricksData.h"
#include <random>
#include <time.h>
#include <iostream>

// Initialize data structures to the initial position:
//  1  2  3  4
//  5  6  7  8
//  9 10 11 12
// 13 14 15
BricksData::BricksData() : gameBoard {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}} {


    }


// If 'toMove' is a legal brick to move then update the data
// structures, add the moved bricks to 'brickList, and return the
// direction of the move.
// Otherwise return the move direction 'None'. Up, Left, None, Right, Down.
BricksData::Movement BricksData::Move(int toMove, std::vector<int>& brickList) {

    int temp;
    int i;
    int j;

    for(int x=0; x<4; x++) {
        for(int y=0; y<4; y++) {
            if(gameBoard[x][y] == toMove) {
                i = x;
                j = y;
                }
            }
        }

    if(gameBoard[i][j+1] == 0) {

        temp = gameBoard[i][j];
        gameBoard[i][j] = gameBoard[i][j+1];
        gameBoard[i][j+1] = temp;

        brickList.push_back(temp);
        return Right;
        }

    if(gameBoard[i][j-1] == 0) {

        temp = gameBoard[i][j];
        gameBoard[i][j] = gameBoard[i][j-1];
        gameBoard[i][j-1] = temp;

        brickList.push_back(temp);
        return Left;
        }

    if(gameBoard[i-1][j] == 0) {
        if((i==0) && (j==1 || j==2)) {
            return None;
            }
        temp = gameBoard[i][j];
        gameBoard[i][j] = gameBoard[i-1][j];
        gameBoard[i-1][j] = temp;

        brickList.push_back(temp);
        return Up;
        }

    if(gameBoard[i+1][j] == 0) {
        if(i==3 && j==3) {
            return None;
            }

        temp = gameBoard[i][j];
        gameBoard[i][j] = gameBoard[i+1][j];
        gameBoard[i+1][j] = temp;


        brickList.push_back(temp);
        return Down;
        }

    return None;
    }

// Add all brick numbers in according order to their current
// position (use '0' for the empty square)
// The order for the initial positions is:
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 0
void BricksData::Positions(std::vector<int>& brickList) {

    for(int i=0; i<4; i++) {
        for(int j=0; j<4 ; j++) {
            brickList.push_back(gameBoard[i][j]);
            }
        }
    }

// Reset the data structures to the initial position
void BricksData::Reset() {
    int pos = 1;
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                gameBoard[i][j] = pos;
                    pos++;
            }
        }
        gameBoard[3][3] = 0;
    }

// Shuffle the bricks to random positions
void BricksData::Shuffle() {

    srand (time(NULL));
    int random;
    std::vector<int> numbers;
    for (int i=0; i<=15; i++) numbers.push_back(i); //lägger till i vektorn 0-15

    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            random = rand() % numbers.size();
            gameBoard [i][j] = numbers[random];
            numbers.erase(numbers.begin()+ random);
            }
        }
    }

// Return 'true' if the puzzle is solved, i.e. all bricks are in
// their initial positions
bool BricksData::Check() {
    int pos=1;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4 ; j++) {
            if(gameBoard[i][j]==pos)pos++;
            else break;
            }
        }
    if(pos == 16)
        return true;
    else
        return false;
    }
