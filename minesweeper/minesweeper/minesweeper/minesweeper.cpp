// minesweeper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/**
*
* Solution to course project #5 Minesweeper
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2023/2024
*
* @author Nadezhda Doneva
* @idnumber 2MI0600333
* @compiler VC
*
* Minesweeper game code
*
*/



#include <iostream>
#include <cstdlib>;
#include <time.h> 
#include <iomanip>
using namespace std;

// validate user input of dimensions and mines count
bool validationOfInput(size_t boardDimension, const unsigned minesCount) {
    int maxMines = 3 * boardDimension;
    if (boardDimension >= 3 && boardDimension <= 10 && minesCount >= 1 && minesCount <= maxMines)
    {
        if (boardDimension==3 && minesCount > 7)
        {
            return 0;
        }
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
bool isRepeatedMine(char realBoard[10][10], int x, int y, unsigned minesCount) {
        if (realBoard[x][y] == '*')
        {
            return true;
        }
    return false;
}

void countOfMinesAroundCurrField(char realBoard[10][10], size_t boardDimension, const int i, const int j) {
    char countMinesAround = '0';
    for (int k = i-1; k <= i + 1; k++)
    {
        for (int l = j - 1; l <= j + 1; l++) {
            if (k >= 0 && l >= 0 && k < boardDimension && l < boardDimension)
            {
                if (i == k && j == l)
                {
                    continue;
                }
                else {
                    if (realBoard[k][l] == '*')
                    {
                        countMinesAround++;
                    }
                }
            }
        }
    }
    realBoard[i][j] = countMinesAround;
}

void countOfminesInNeighbouringFields(char realBoard[10][10], size_t boardDimension) {
    for (int i = 0; i < boardDimension; i++)
    {
        for (int j = 0; j < boardDimension; j++)
        {
            if (realBoard[i][j] != '*') {
                countOfMinesAroundCurrField(realBoard, boardDimension, i, j);
            }
        }
    }
}

//place mines on random coordinates
void placeMinesRandomly(char realBoard[10][10], unsigned minesCount, size_t boardDimension) {
    srand(time(0));
    int x = 0;
    int y = 0;

    for (size_t i = 0; i < minesCount; i++)
    {
        x = rand() % boardDimension;
        y = rand() % boardDimension;
        //check for repeated coordinates and change them if needed
        while (isRepeatedMine(realBoard, x, y, minesCount))
        {
            x = rand() % boardDimension;
            y = rand() % boardDimension;
        }
        realBoard[x][y] = '*';
    }
    countOfminesInNeighbouringFields(realBoard, boardDimension);
}

void printPlayerBoard(const char playerBoard[10][10], size_t boardDimension) {
    cout << " #|";
    for (size_t i = 0; i < boardDimension; i++)
    {
        cout << setw(4) << i;
    }
    cout << endl;
    cout << "   ";
    for (size_t i = 0; i < boardDimension*2; i++)
    {
        cout << setw(2) << '_';
    }
    cout << endl;
    for (size_t i = 0; i < boardDimension; i++)
    {
        cout << setw(2) << i << "|";
        for (size_t j = 0; j < boardDimension; j++) {
            cout << setw(4) << playerBoard[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

//creates realBoard (ivisible board witch holds all the info) and playerBoard (the board with witch the player communicates with)
void createBoard(char realBoard[10][10], char playerBoard[10][10], size_t boardDimension, unsigned minesCount) {
    for (int i = 0; i < boardDimension; i++)
    {
        for (int j = 0; j < boardDimension; j++)
        {
            realBoard[i][j] = '-';
            playerBoard[i][j] = '-';
        }
    }
    placeMinesRandomly(realBoard, minesCount, boardDimension);
    //DELETE:
    printPlayerBoard(realBoard, boardDimension);
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
    cout << "Enter operation (mark, unmark, open) and coordinates: " << endl;
    cin >> operation >> x >> y;
    while (!areValidInputCoordinatesAndOperation(x, y, operation, boardDimension))
    {
        cout << "Please enter valid coordinates and command: " << endl;
        cin >> operation >> x >> y;
    }
}

//check if a field is a mine
bool isMine(const int x, const int y, char realBoard[10][10], size_t boardDimension) {
    if (realBoard[x][y] == '*')
    {
        return true;
    }
    return false;
}

// if a mine is hit on the first move we change the coordinates of the mine to the first non-mine field
void replaceMine(const int x, const int y, char realBoard[10][10], size_t boardDimension) {
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

//open all fields next to zeroes
void openAllNeighbours(const char realBoard[10][10], char playerBoard[10][10], const int xMove, const int yMove, size_t boardDimension) {
    if (realBoard[xMove][yMove] != '0')
    {
        playerBoard[xMove][yMove] == realBoard[xMove][yMove];
    }
    for (int i = xMove - 1; i <= xMove + 1; i++)
    {
        for (int j = yMove - 1; j <= yMove + 1; j++) {
            if (i >= 0 && j >= 0 && i < boardDimension && j < boardDimension)
            {
                if (i == xMove && j == yMove)
                {
                    continue;
                }
                else {
                    if (playerBoard[i][j] == '-' && realBoard[i][j] != '*' && realBoard[i][j] == '0')
                    {
                        playerBoard[i][j] = realBoard[i][j];
                        openAllNeighbours(realBoard, playerBoard, i, j, boardDimension);
                    }
                }
            }
        }
    }
}

//open field functionality
void openField(char realBoard[10][10], char playerBoard[10][10], const int xMove, const int yMove, bool& gameOver, size_t boardDimension, int& movesLeft) {
    if (playerBoard[xMove][yMove] == '?')
    {
        cout << "The field is marked! Unmark before opening it. " << endl;
    }
    else if (playerBoard[xMove][yMove] != '-')
    {
        cout << "The field has already been opened. " << endl;
    }
    else {
        if (realBoard[xMove][yMove] == '*')
        {
            gameOver = true;
            cout << "You hit a mine! Game over!" << endl;
            printPlayerBoard(realBoard, boardDimension);
        }
        else if(realBoard[xMove][yMove] != '0')
        {
            playerBoard[xMove][yMove] = realBoard[xMove][yMove];
            movesLeft--;
        }
        else {
            openAllNeighbours(realBoard, playerBoard, xMove, yMove, boardDimension);
        }
    }
}

//mark field functionality
void markField(char playerBoard[10][10], const int xMove, const int yMove) {
    //check if already marked
    if (playerBoard[xMove][yMove] == '?')
    {
        cout << "This field is already marked." << endl;
    }
    //check if opened
    else if (playerBoard[xMove][yMove] != '-')
    {
        cout << "This field has been opened." << endl;
    }
    //otherwise mark field
    else {
        playerBoard[xMove][yMove] = '?';
    }
}

//unmark field functionality
void unmarkField(char playerBoard[10][10], const int xMove, const int yMove) {
    //check if it is already opened
    if (playerBoard[xMove][yMove] != '-' && playerBoard[xMove][yMove] != '?')
    {
        cout << "You can`t unmark already opened field." << endl;
    }
    //check if it`s not marked
    else if (playerBoard[xMove][yMove] != '?')
    {
        cout << "You can`t unmark a field, which has not been marked first." << endl;
    }
    //otherwise unmark
    else {
        playerBoard[xMove][yMove] = '-';
    }
}

void playMinesweeper(char realBoard[10][10], char playerBoard[10][10], size_t boardDimension, unsigned minesCount) {
    int movesLeft = boardDimension * boardDimension - minesCount;
    createBoard(realBoard, playerBoard, boardDimension, minesCount);
    bool gameOver = false;
    int currentMove = 0;

    while (!gameOver)
    {
        cout << "Current board status: " << endl;
        printPlayerBoard(playerBoard, boardDimension);
        char operation[7];
        int xMove, yMove;
        makeMove(xMove, yMove, operation, boardDimension);

        //if it`s the first move, player should never lose, so if he hits a mine, we move the mine somewhere else and 
        //again count the mines around every field
        if (currentMove == 0)
        {
            if (isMine(xMove, yMove, realBoard, boardDimension)) {
                replaceMine(xMove, yMove, realBoard, boardDimension);
                countOfminesInNeighbouringFields(realBoard, boardDimension);
            }
        }
        currentMove++;

        if (strCompare(operation, "open") == 0)
        {
            openField(realBoard, playerBoard, xMove, yMove, gameOver, boardDimension, movesLeft);
        }
        else if(strCompare(operation, "mark") == 0) {
            markField(playerBoard, xMove, yMove);
        }
        else if (strCompare(operation, "unmark") == 0) {
            unmarkField(playerBoard, xMove, yMove);
        }

        if (!gameOver && (movesLeft == 0))
        {
            cout << "VICTORY!";
            gameOver = true;
        }
    }
    return;
}

void rules() {
    cout << "RULES:" << endl << endl;
    cout << "1. Firstly, the player should enter the board DIMENSIONS and the COUNT of all MINES." << endl;
    cout << "2. The game starts and the player should enter a command OPEN, MARK, UNMARK and COORDINATES of a cell." << endl;
    cout << "3. If the player hits a mine - he loses the game." << endl;
    cout << "4. Victory - when all fields with numbers are opened." << endl;
    cout << "5. * : mine; ? : marked; - : starting value of every field" << endl << endl << endl;
}


int main()
{
    size_t boardDimension = 0;
    unsigned minesCount = 0;
    rules();
    customizeSettings(boardDimension, minesCount);
    char realBoard[10][10];
    char playerBoard[10][10];
    playMinesweeper(realBoard, playerBoard, boardDimension, minesCount);
}

