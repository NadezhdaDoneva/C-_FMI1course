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

//user enters dimensions and minesCount
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
bool isRepeatedMine(/*int minesCoordinatesArr[30][2],*/char realBoard[10][10], int x, int y, unsigned minesCount) {
        if (realBoard[x][y] == '*')
        {
            return true;
        }
    return false;
}

//place mines on random coordinates
void placeMinesRandomly(char realBoard[10][10], /*int minesCoordinatesArr[30][2],*/ unsigned minesCount, size_t boardDimension) {
    srand(time(0));
    int x = 0;
    int y = 0;

    for (size_t i = 0; i < minesCount; i++)
    {
        x = rand() % boardDimension;
        y = rand() % boardDimension;
        //check for repeated coordinates and change them if needed
        while (isRepeatedMine(/*minesCoordinatesArr*/realBoard, x, y, minesCount))
        {
            x = rand() % boardDimension;
            y = rand() % boardDimension;
        }
        //minesCoordinatesArr[i][0] = x;
        //minesCoordinatesArr[i][1] = y;
        realBoard[x][y] = '*';
    }
}

void createBoard(char realBoard[10][10], char playerBoard[10][10], size_t boardDimension, unsigned minesCount /*int minesCoordinatesArr[30][2]*/) {
    for (int i = 0; i < boardDimension; i++)
    {
        for (int j = 0; j < boardDimension; j++)
        {
            realBoard[i][j] = '-';
            playerBoard[i][j] = '-';
        }
    }
    placeMinesRandomly(realBoard, /*minesCoordinatesArr*/ minesCount, boardDimension);
}

void printPlayerBoard(char playerBoard[10][10], size_t boardDimension) {
    cout << "Current board status: " << endl;
    for (size_t i = 0; i < boardDimension; i++)
    {
        for (size_t j = 0; j < boardDimension; j++) {
            cout << playerBoard[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool areValidInputCoordinates(int const x, int const y, size_t boardDimension) {
    if (x >= 0 && x <= boardDimension && y >= 0 && y <= boardDimension)
    {
        return true;
    }
    return false;
}

void makeMove(int& x, int& y, size_t boardDimension) {
    cout << "Enter the coordinates of the cell you want to open: " << endl;
    cin >> x;
    cin >> y;
    while (!areValidInputCoordinates(x, y, boardDimension))
    {
        cout << "Please enter valid coordinates: " << endl;
        cin >> x;
        cin >> y;
    }
}

bool isMine(int x, int y, char realBoard[10][10], size_t boardDimension) {
    if (realBoard[x][y] == '*')
    {
        return true;
    }
    return false;
}

void replaceMine(int x, int y, char realBoard[10][10], size_t boardDimension) {
    for (size_t i = 0; i < boardDimension; i++)
    {
        for (size_t j = 0; j < boardDimension; j++) {
            if (realBoard[i][j] != '*')
            {
                realBoard[i][j] = '*';
                realBoard[x][y] = '-';
            }
        }
    }
}

void playMinesweeper(char realBoard[10][10], char playerBoard[10][10], size_t boardDimension, unsigned minesCount) {
    //int minesCoordinatesArr[30][2];
    unsigned movesLeft = boardDimension * boardDimension - minesCount;
    createBoard(realBoard, playerBoard, boardDimension, minesCount /*minesCoordinatesArr*/);
    bool gameOver = false;
    int currentMove = 0;

    while (!gameOver)
    {
        printPlayerBoard(playerBoard, boardDimension);
        int xMove, yMove;
        makeMove(xMove, yMove, boardDimension);

        if (currentMove == 0)
        {
            if (isMine(xMove, yMove, realBoard, boardDimension)) {
                replaceMine(xMove, yMove, realBoard, boardDimension);
            }
        }
        
    }
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

