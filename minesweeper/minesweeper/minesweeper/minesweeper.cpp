// minesweeper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>;
#include <time.h> 
using namespace std;

bool validationOfInput(size_t boardDimension, unsigned minesCount) {
    int maxMines = 3 * boardDimension;
    if (boardDimension >= 3 && boardDimension <= 10 && minesCount >= 1 && minesCount <= maxMines)
    {
        return 1;
    }
    else {
        return 0;
    }
}

void customizeSettings(size_t& boardDimension, unsigned& minesCount) {
    cout << "Enter board dimensions: ";
    cin >> boardDimension;
    cout << "Enter number of mines: ";
    cin >> minesCount;

    while (!validationOfInput(boardDimension, minesCount))
    {
        cout << "Invalid input, please try again" << endl;
        cout << "Enter board dimensions: ";
        cin >> boardDimension;
        cout << "Enter number of mines: ";
        cin >> minesCount;
    }
}

//check if mine with the same coordinates is already generated
bool isRepeatedMine(int minesCoordinatesArr[30][2], int& x, int& y, unsigned minesCount) {
    for (size_t i = 0; i < minesCount; i++)
    {
        if (minesCoordinatesArr[i][0] == x && minesCoordinatesArr[i][1] == y)
        {
            return true;
        }
    }
    return false;
}

void placeMinesRandomly(char realBoard[10][10], int minesCoordinatesArr[30][2], unsigned minesCount, size_t boardDimension) {
    srand(time(0));
    int x = 0;
    int y = 0;

    for (size_t i = 0; i < minesCount; i++)
    {
        x = rand() % boardDimension;
        y = rand() % boardDimension;
        x = 2;
        y = 2;
        while (isRepeatedMine(minesCoordinatesArr, x, y, minesCount))
        {
            x = rand() % boardDimension;
            y = rand() % boardDimension;
        }
        cout << x << y << endl;
        minesCoordinatesArr[i][0] = x;
        minesCoordinatesArr[i][1] = y;
        realBoard[x][y] = '*';
    }
}

void createBoard(char realBoard[10][10], char playerBoard[10][10], size_t boardDimension, unsigned minesCount, int minesCoordinatesArr[30][2]) {
    for (int i = 0; i < boardDimension; i++)
    {
        for (int j = 0; j < boardDimension; j++)
        {
            realBoard[i][j] = '_';
            playerBoard[i][j] = '_';
        }
    }
    placeMinesRandomly(realBoard, minesCoordinatesArr, minesCount, boardDimension);
}

void playMinesweeper(char realBoard[10][10], char playerBoard[10][10], size_t boardDimension, unsigned minesCount) {
    int minesCoordinatesArr[30][2];
    createBoard(realBoard, playerBoard, boardDimension, minesCount, minesCoordinatesArr);

    bool gameOver = false;
}

int main()
{
    size_t boardDimension = 0;
    unsigned minesCount = 0;
    customizeSettings(boardDimension, minesCount);
    char realBoard[10][10];
    char playerBoard[10][10];
    playMinesweeper(realBoard, playerBoard, boardDimension, minesCount);

}

