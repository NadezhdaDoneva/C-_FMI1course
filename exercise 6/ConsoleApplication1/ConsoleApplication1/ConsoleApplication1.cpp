// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//uvodna zad
//void countOfOnes(int num) {
//    int counterOfOnes = 0;
//
//    while (num>0)
//    {
//        if (num % 2 == 1) {
//            counterOfOnes++;
//        }
//        num /= 2;
//    }
//    cout << counterOfOnes;
//}


//zad1
//int ternaryToDecimal(int num) {
//    int lenght = 0;
//    int decimalNum = 0;
//    int decimalPowCounter = 0;
//    int multiplier = 1;
//    
//    while (num>0)
//    {
//        int lastDigit = num % 10;
//        num = num / 10;
//
//        decimalNum += lastDigit * multiplier;
//        multiplier *= 3;
//    }
//    return decimalNum;
//}
//
//void decimalToOctal(int num) {
//    int octalNum[100];
//    int i = 0;
//
//    while (num != 0) {
//        octalNum[i] = num % 8;
//        num /= 8;
//        i++;
//    }
//    
//    for (int j = i-1; j >= 0; j--)
//    {
//        cout << octalNum[j];
//    }
//}

int main()
{
    //SEMINAR
    /*std::cout << "Hello World!\n";

    int a = 5;
    int b = 2;

    cout << "a = " << a << " b = " << b << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a << b = " << (a << b) << endl;
    cout << "a >> b = " << (a >> b) << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;*/


    //PRAKTIKUM

    //uvodna zad
    /*int n;
    cin >> n;
    countOfOnes(n);*/

    //zad1
    /*int ternaryNum;
    cin >> ternaryNum;
    int decimalNum = ternaryToDecimal(ternaryNum);
    cout << decimalNum << endl;
    decimalToOctal(decimalNum);*/

    //MULTY ARRAYS

    //zad1
    //int const n = 3;
    //int const m = 3;
    //int arr[n][m];

    //for (int i = 0; i < n; i++)
    //{
    //    for (int j = 0; j < m; j++)
    //    {
    //        int temp;
    //        cin >> temp;
    //        arr[i][j] = temp;
    //    }
    //}

    //int min = arr[0][0];

    //for (int i = 0; i < n; i++)
    //{
    //    for (int j = 0; j < m; j++) {
    //        if (arr[i][j]<min)
    //        {
    //            min = arr[i][j];
    //        }
    //    }
    //}
    //
    //cout << min;

    //zad2
//    int const n = 3;
//    int arr[3][3];
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            int temp;
//            cin >> temp;
//            arr[i][j] = temp;
//        }
//    }
//
//    cout << "Main diagonal: " << endl;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++) {
//            if (i == j) {
//                cout << arr[i][j] << " ";
//            }
//        }
//    }
//
//    cout << endl << "Second diagonal: " << endl;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++) {
//            if (i + j == n-1)
//            {
//                cout << arr[i][j];
//            }
//        }
//    }
//}

//zad3
    int const n = 3;
    int arr[3][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            arr[i][j] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            if (i%2==0)
            {
                cout << arr[i][j];
            }
        }
    }

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = n-1; j >= 0; j--) {
            if (i%2==1)
            {
                cout << arr[i][j];
            }
        }
    }
}


// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
