// exercise 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //zad1
    //int n;
    //cin >> n;

    //for (int i = 1; i <= n; i++) {
    //    for (int j = 1; j <= i; j++)
    //    {
    //        cout << j;
    //    }
    //    cout << endl;
    //}

    //zad2
    /*int n;
    int y;
    cin >> n;

    for (int x = 1; x <n; x++) {
        y = n - x;
        cout << "x = " << x << " y = " << y << endl;
        
    }*/

    //zad3
    /*int n;
    cin >> n;
    int powedNum = n * n;
    int newN = 0;

    while (powedNum>0)
    {
        newN = newN * 10;
        newN += powerdNum % 10;
        powerdNum = poweredNum /10;
        
    }
    cout << newN;*/

    //zad4
    /*int n;
    cin >> n;
    int factoriel = 1;
    for (int i = 1; i <= n; i++)
    {
        factoriel *= i;

    }
    cout << factoriel;*/

    //zad5
    /*int m, n;
    cin >> m >> n;
    
        for (int j = 1; j <= m * n; j++)
        {
            cout << j;
            if (j == n) {
                cout << endl;
            }
        }*/


    //zad6
    /*int n;
    cin >> n;
    int guess;
    cin >> guess;
    int guessCounter = 1;

    if (n >= 0 && n <= 100) {
        while (guess != n) {
            guessCounter++;
            if (guess > n) {
                cout << "N is lower" << endl;
            }
            else if (guess < n) {
                cout << "n is higher" << endl;
            }
            else {
                cout << "You guessed the number with " << guessCounter;
            }
            cin >> guess;
        }

        cout << "You guessed the number with " << guessCounter << "tries";
    }
    else {
        cout << "not valid number!";
    }*/

    //zad8
    /*int n;
    cin >> n;

    for (int a = 1; a <= n; a++) {
        for (int b = a; b <= n; b++) {
            for (int c = b; c <= n; c++) {
                if (a*a + b*b == c*c) {
                    cout << a << " " << b << " " << c << endl;
                }
            }
        }
    }*/
    

    //zad9
    int n;
    cin >> n;
    char symbol;
    cin >> symbol;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
            cout << symbol;
            
        }
        
        
        
        
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
