// minesweeper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>;
#include <time.h> 
using namespace std;

bool validationOfInput(int boardDimension, int mines) {
    int maxMines = 3 * boardDimension;
    if (boardDimension >= 3 && boardDimension <= 10 && mines >= 1 && mines <= maxMines)
    {
        return 1;
    }
    else {
        return 0;
    }
}

void customizeSettings(int& boardDimension, int& mines) {
    cout << "Enter board dimensions: ";
    cin >> boardDimension;
    cout << "Enter number of mines: ";
    cin >> mines;

    while (!validationOfInput(boardDimension, mines))
    {
        cout << "Invalid input, please try again" << endl;
        cout << "Enter board dimensions: ";
        cin >> boardDimension;
        cout << "Enter number of mines: ";
        cin >> mines;
    }
}

void placeMinesRandomly(char realBoard[10][10], int minesCoordinatesArr[30][2]) {
    srand(time(0));

}

void createBoard(char realBoard[10][10], char playerBoard[10][10], int boardDimension, int mines, int minesCoordinatesArr[30][2]) {
    for (int i = 0; i < boardDimension; i++)
    {
        for (int j = 0; j < boardDimension; j++)
        {
            realBoard[i][j] = '_';
            playerBoard[i][j] = '_';
        }
    }
    placeMinesRandomly(realBoard, minesCoordinatesArr);
}

void playMinesweeper(char realBoard[10][10], char playerBoard[10][10], int boardDimension, int mines) {
    int minesCoordinatesArr[30][2];
    createBoard(realBoard, playerBoard, boardDimension, mines, minesCoordinatesArr);

    bool gameOver = false;
}

int main()
{
    int boardDimension = 0;
    int mines = 0;
    customizeSettings(boardDimension, mines);
    char realBoard[10][10];
    char playerBoard[10][10];
    playMinesweeper(realBoard, playerBoard, boardDimension, mines);

    srand(time(0));
    cout << rand() % boardDimension * boardDimension;
}

