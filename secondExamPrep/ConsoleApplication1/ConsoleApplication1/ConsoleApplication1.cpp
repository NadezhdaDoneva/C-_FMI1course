// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//zad1
//int biggestNumInArr(int arr[], int size) {
//    int max = arr[0];
//
//    for (int i = 1; i < size; i++)
//    {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}


//zad2
//void hoursAfterMidnight(int seconds) {
//        int hours = seconds / 3600;
//        seconds = seconds % 3600;
//        int minutes = seconds / 60;
//        
//        if (hours < 10 && minutes<10) {
//            cout << "0" << hours << ":" << "0" << minutes;
//        }
//        else if(hours < 10) {
//            cout << "0" << hours << ":" << minutes;
//        }
//        else if (minutes < 10) {
//            cout << hours << ":" << "0" << minutes;
//        }
//        else {
//            cout << hours << ":" << minutes;
//        } 
//}

//zad3
//double sumOfOddIndexes(double arr[], int size) {
//    double sum = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (i % 2 == 1) {
//            sum += arr[i];
//        }
//    }
//    return sum;
//}


//zad4
//void averageOfDigits(int num) {
//    int sum = 0;
//    int avrg = 0;
//    int sizeOfNum = 0;
//    while (num>0)
//    {
//        int tempLastDigit = num % 10;
//        num /= 10;
//
//        sum += tempLastDigit;
//        sizeOfNum++;
//    }
//    avrg = sum / sizeOfNum;
//    cout << avrg << endl;
//}

// zad5
//int sumOfEvenNums(int arr[],int size) {
//    int evenSum = 0;
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] % 2 == 0) {
//            evenSum += arr[i];
//        }
//    }
//    return evenSum;
//}

int main()
{
    //zad1
    /*std::cout << "Hello World!\n";
    int arr[1000];
    int size;

    cout << " Please enter array size: ";
    cin >> size;

    cout << " Please enter array numbers: ";
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    int max = biggestNumInArr(arr, size);
    
    cout << "Max number in arr is: " << max << endl;*/
    
    //zad2
    /*int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;

    if (seconds >= 0 && seconds <= 86000)
    {
        hoursAfterMidnight(seconds);
    }
    else {
        cout << "Invalid input";
    }*/

    //zad3
    /*double arr1[] = { 1.2 };
    double arr2[] = { 1.2 ,3.2, 4.2 };
    double arr3[] = { 1.2 ,3.2, 4.2, 5.2, 6.2 };
    int size;

    double sum1 = sumOfOddIndexes(arr1, size = 1);
    double sum2 = sumOfOddIndexes(arr2, size = 3);
    double sum3 = sumOfOddIndexes(arr3, size = 5);

    cout << "Sum 1: " << sum1 << endl;
    cout << "Sum 2: " << sum2 << endl;
    cout << "Sum 3: " << sum3 << endl;*/

    //zad4
    /*int num1 = 5;
    int num2 = 45;
    int num3 = 455;

    averageOfDigits(num1);
    averageOfDigits(num2);
    averageOfDigits(num3);*/

    //zad5
    /*int arr1[] = { 1 };
    int arr2[] = { 1 ,2, 4 };
    int arr3[] = { 1 ,3, 2, 2, 6 };
    int size;

    double sum1 = sumOfEvenNums(arr1, size = 1);
    double sum2 = sumOfEvenNums(arr2, size = 3);
    double sum3 = sumOfEvenNums(arr3, size = 5);

    cout << "Sum 1: " << sum1 << endl;
    cout << "Sum 2: " << sum2 << endl;
    cout << "Sum 3: " << sum3 << endl;*/
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
