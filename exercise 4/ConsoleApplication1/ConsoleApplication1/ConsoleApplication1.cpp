// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //BUBBLE SORT
    /*int arr[] = { 7,3,1,1,4,9,5,2 };
    int size = 8;
    
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }*/

    //INSERTION SORT
    /*int arr[] = { 7,3,1,1,4,9,5,2 };
    int size = 8;
    for (int step = 1; step < size; step++)
    {
        int key = arr[step];
        int j = step - 1;

        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }*/

    //SELECTION SORT
    int arr[] = { 7,3,1,1,4,9,5,2 };
    int size = 8;
    for (int i = 0; i < size-1; i++)
    {
        int minIndx = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[minIndx] > arr[j]) {
                minIndx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndx];
        arr[minIndx] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
