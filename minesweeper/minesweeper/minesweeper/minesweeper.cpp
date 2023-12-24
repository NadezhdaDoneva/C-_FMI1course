// minesweeper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>;
#include <time.h> 
using namespace std;

// validate user input of dimensions and mines count
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

//check if mine with the same coordinates is already generated during random generation
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

//creates realBoard (ivisible board witch holds all the info) and playerBoard (the board with witch the player communicates with)
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

//check if two strings are equal
int strCompare(const char* first, const char* second)
{
    if (first == nullptr || second == nullptr)
        return -2;
    while (*first != '\0' && *second != '\0')
    {
        if (*first < *second)
            return -1;
        if (*first > *second)
            return 1;
        first++;
        second++;
    }
    if (*first == '\0' && *second == '\0')
        return 0;
    return *first == '\0' ? -1 : 1;
}

//user input checked if valid
bool areValidInputCoordinatesAndOperation(int const x, int const y, char const operation[7], size_t boardDimension) {
    if (x >= 0 && x <= boardDimension && y >= 0 && y <= boardDimension 
        && (strCompare(operation, "open") == 0 || strCompare(operation, "mark") == 0 || strCompare(operation, "unmark") == 0))
    {
        return true;
    }
    return false;
}

//the user enters command and coordinates
void makeMove(int& x, int& y, char operation[7], size_t boardDimension) {
    cout << "Enter operation (mark, unmark, open): " << endl;
    cin >> operation >> x >> y;
    while (!areValidInputCoordinatesAndOperation(x, y, operation, boardDimension))
    {
        cout << "Please enter valid coordinates and command: " << endl;
        cin >> operation >> x >> y;
    }
}

//check is a field is a mine
bool isMine(int x, int y, char realBoard[10][10], size_t boardDimension) {
    if (realBoard[x][y] == '*')
    {
        return true;
    }
    return false;
}

// if a mine is hit on the first move we change the coordinates of the mine to the first non-mine field
void replaceMine(int x, int y, char realBoard[10][10], size_t boardDimension) {
    for (size_t i = 0; i < boardDimension; i++)
    {
        for (size_t j = 0; j < boardDimension; j++) {
            if (realBoard[i][j] != '*')
            {
                realBoard[i][j] = '*';
                realBoard[x][y] = '-';
                return;
            }
        }
    }
    return;
}

//recursive function for playing minesweeper
bool playMinesweeperUntil(char realBoard[10][10], char playerBoard[10][10], unsigned minesCount, int xMove, int yMove, unsigned movesLeft) {
    //base of recursion
    if (realBoard[xMove][yMove] == '*')
    {
        return true;
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
        char operation[7];
        int xMove, yMove;
        makeMove(xMove, yMove, operation, boardDimension);

        if (currentMove == 0)
        {
            if (isMine(xMove, yMove, realBoard, boardDimension)) {
                replaceMine(xMove, yMove, realBoard, boardDimension);
            }
        }
        
        currentMove++;
        gameOver = playMinesweeperUntil(realBoard, playerBoard, minesCount, xMove, yMove, movesLeft);

        if (!gameOver && (movesLeft == 0))
        {
            cout << "Victory!";
            gameOver = true;
        }
    }
    return;
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

