// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//zad1
//void findRepeated(int* arr, int n) {
//    int repeated = 0;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i; j < n; j++)
//        {
//            if (arr[i] == arr[j]) {
//                repeated = arr[i];
//                break;
//            }
//        }
//        if (repeated)
//        {
//            break;
//        }
//    }
//    cout << repeated << " is the first repeated number";
//}

//zad2
//void isPolyndrom(int* arr, int n) {
//    bool isPolyndrome = true;
//    if (n % 2 == 0) {
//        for (int i = 0; i < n / 2; i++)
//        {
//            if (arr[i] != arr[n - i - 1]) {
//                isPolyndrome = false;
//            }
//        }
//        if (isPolyndrome) {
//            cout << "true : is a polyndrom";
//        }
//        else {
//            cout << "false : is not a polyndrom";
//        }
//    }
//    else {
//        cout << "false : is not a polyndrom";
//    }
//}

//1 2 3 4 5 6 7 8
//zad3
//void reverseFirstHalf(int* arr, int n) {
//    for (int i = 0; i < n/4; i++)
//    {
//        int secondElIndx = n /2 - i -1;
//        int temp = arr[i];
//        arr[i] = arr[secondElIndx];
//        arr[secondElIndx] = temp;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//}


//1 2 3 4 5 6
//zad4
//void deleteElement(int* arr, int n, int delIndx) {
//    int newArr[1000];
//    bool isFound = false;
//    for (int i = 0; i < n; i++)
//    {
//        if (i == delIndx) {
//            isFound = true;
//        }
//        if (isFound)
//        {
//            newArr[i] = arr[i + 1];
//        }
//        else {
//            newArr[i] = arr[i];
//        }
//    }
//    newArr[n-1] = -1;
//
//    for (int i = 0; i < n; i++)
//            {
//                cout << newArr[i] << " ";
//            }
//}

//zad5
//void findOmmited(int* arr, int size) {
//    bool isFound = false;
//    int missing = -1;
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//        {
//            if (arr[i] == j) {
//                isFound == true;
//                break;
//            }
//            else {
//                missing = j;
//            }
//            
//        }
//        if (!isFound) {
//            cout << missing << "is missing";
//            break;
//        }
//    }
//}

//zad6
//void repetitionNumber(int* arr, int size) {
//
//    int countArr[10] = {0,0,0,0,0,0,0,0,0,0};
//    
//    for (int i = 0; i < 10; i++)
//    {
//        
//    }
//}

//1234
int reverse(int n)
{
    int rev = 0;
    while (n != 0) {
        rev = (rev * 10) + (n % 10);
        n /= 10;
    }
    return rev;
}

//zad*
void numbersThroughOne(int num, int lenght) {
    int rev = 0;
    while (num != 0) {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    
    int c = 1;
    int firstNum = 0;
    int secondNum = 0;
    int stepen1 = lenght/2;
    int stepen2 = lenght / 2;

    while (rev != 0) {
        if (c % 2 == 0) {
            int tempDigit = rev % 10;
            firstNum += tempDigit * pow(10, (stepen1-1));
            rev /= 10;
            c++;
            stepen1--;
        }
        else {
            int tempDigit = rev % 10;
            secondNum += tempDigit * pow(10, (stepen2-1));
            rev /= 10;
            c++;
            stepen2--;
        }
    }
    cout << firstNum << " " << secondNum;
}

int main()
{

    //seminar
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
    /*int arr[] = { 7,3,1,1,4,9,5,2 };
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
    }*/




    //Practice
    //zad1
    /*int n;
    cin >> n;
    int arr[1000];

    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    findRepeated(arr, n);*/

    //zad2
    /*int n;
    cin >> n;
    int arr[1000];

    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    isPolyndrom(arr, n);*/

    //zad3
    /*int n;
    cin >> n;
    int arr[1000];

    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    reverseFirstHalf(arr, n);*/

    //zad4
    /*int n;
    cout << "Enter lenght";
    cin >> n;
    int arr[1000];

    cout << "enter array digits:";
    for (size_t i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    int delIndx;
    cout << "enter index to delete:";
    cin >> delIndx;

    deleteElement(arr, n, delIndx);*/

    //zad5
    /*int const size = 5;
    int arr[size];

    cout << "enter array digits:";
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    findOmmited(arr, size);*/

    //zad6
    /*int const size = 10;
    int arr[size];

    cout << "enter array digits:";
    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }

    repetitionNumber(arr, size);*/

    //zad*
    int num, lenght;
    cout << "Enter number lenght: ";
    cin >> lenght;
    cout << "Enter number value: ";
    cin >> num;
    numbersThroughOne(num, lenght);

    
    return 0;


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
