// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//zad1
//int countDivisors(int number) {
//    int countofDivisors = 0;
//    for (int i = 1; i < sqrt(number); i++)
//    {
//        if (number % i == 0) {
//            if (number / i == i) {
//                
//                countofDivisors++;
//            }
//            else {
//                countofDivisors += 2;
//            }
//        }
//    }
//    return countofDivisors;
//}

//zad3
//int validation(int n, int s, char c) {
//    if (n > 0 && n < 256 && s>0 && s < 127 /*&& c>'a' && c < 'z'*/) {
//        return 0;
//    }
//    else if (n <= 0) {
//        return -1;
//    }
//    else {
//        return 1;
//    }
//    
//}



int main()
{
    //zad1
    /*int n, k;
    int countDivisorsX = 0;
    int countDivisorsY = 0;
    int kDxDy = 0;
    int counterSatisfyingNumbers = 0;


    cout << "Enter number n: " << endl;
    cin >> n;
    cout << "Enter number k: " << endl;
    cin >> k;

    if (n>0 && k>0)
    {

        for (int x = 1; x < n; x++)
        {
            for (int y = x; y < n; y++)
            {
                countDivisorsX = countDivisors(x);
                countDivisorsY = countDivisors(y);

                kDxDy = k * countDivisorsX * countDivisorsY;

                if (kDxDy == x * y) {
                    counterSatisfyingNumbers++;
                }
            }
        }
        cout << counterSatisfyingNumbers << endl;
    }
    else {
        cout << "Incorrect input";
    }*/

    //zad3
    //int n;
    //int s;
    ////validate n
    //char colorsBallsArr[256];
    //cout << "Please enter number of balls: " << endl;
    //cin >> n;

    //cout << "Please enter ball's colors: " << endl;
    //for (int i = 0; i < n; i++)
    //{
    //    char tempBallColor;
    //    cin >> tempBallColor;
    //    colorsBallsArr[i] = tempBallColor;
    //}

    //cout << "Please enter number of shots: " << endl;
    //cin >> s;

    //for (int j = 0; j < s; j++)
    //{
    //    int i;
    //    cout << "Please enter the index of the ball you want to hit: " << endl;
    //    cin >> i;

    //    char c;
    //    cout << "Please enter the color of the shooting ball: " << endl;
    //    cin >> c;

    //    if (validation)
    //    {
    //        //inserting a ball into the array
    //        n++;
    //        for (int k = n; k > i; k--)
    //        {
    //            colorsBallsArr[k] = colorsBallsArr[k - 1];
    //        }
    //        colorsBallsArr[i + 1] = c;

    //        //check if there are three consiquent one colored balls
    //        /*bool isThreeEquals = false;
    //        if (colorsBallsArr[i+1]==colorsBallsArr[i+2])
    //        {
    //            if (colorsBallsArr[i+1] == colorsBallsArr[i + 3] || colorsBallsArr[i + 1] == colorsBallsArr[i]) {
    //                isThreeEquals = true;
    //            }
    //        }
    //        else if (colorsBallsArr[i + 1] == colorsBallsArr[i]) {
    //            if (colorsBallsArr[i] == colorsBallsArr[i-1])
    //            {
    //                isThreeEquals == true;

    //            }
    //        }*/


    //        /*for (int k = i; colorsBallsArr[k] = colorsBallsArr[k+1]; k++)
    //        {
    //            colorsBallsArr[k] = colorsBallsArr[k + 1];
    //        }
    //        for (int k = i; colorsBallsArr[k] = colorsBallsArr[k + 1]; k--)
    //        {
    //            colorsBallsArr[k] = colorsBallsArr[k -1];
    //        }*/
    //        
    //        /*for (int k = 0; k < n; k++)
    //        {
    //            int temp = k;
    //            int count = 0;
    //            while (k + 1 < n && colorsBallsArr[k] == colorsBallsArr[k + 1]) {
    //                count++;
    //                k++;
    //            }

    //            if (count >= 3) {

    //                for (int j = temp; j < n; j++) {
    //                    while (count > 0)
    //                    {
    //                        colorsBallsArr[j] = colorsBallsArr[j + 1];
    //                        count--;
    //                    }
    //                }
    //            }

    //        }*/
    //        
    //    }
    //    else {
    //        cout << "Incorrect input";
    //    }
    //}
    //cout << colorsBallsArr;

//zad2
int countOfPeople = 0;
int questionedPeopleCount;
cin >> questionedPeopleCount;
int arr[1000];
//validate questinedPeopleCount

for (int i = 0; i < questionedPeopleCount; i++)
{
    int tempAnswer;
    cin >> tempAnswer;
    arr[i] = tempAnswer;
}

for (int i = 0; i < questionedPeopleCount; i++)
{
    bool isRepeated = false;
    int countOfRepeatedAnswers = 0;
    for (int j = 0; i < questionedPeopleCount; i++) {
        if (arr[i]==arr[j])
        {
            countOfRepeatedAnswers++;
            isRepeated = true;
        }
    }
    if (countOfRepeatedAnswers>arr[i] && isRepeated)
    {
        countOfPeople += arr[i];
    }
    if (!isRepeated)
    {
        countOfPeople += arr[i];
    }
}
cout << countOfPeople;


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

//reverse a number
//while (n != 0) {
//    remainder = n % 10;
//    reversed_number = reversed_number * 10 + remainder;
//    n /= 10;
//}

//delete element from arr
//int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//
//// delete 3 (index 2)
//for (int i = 2; i < 8; ++i)
//    array[i] = array[i + 1]; // copy next element left

//is polyndrom
//for (int i = 0; i < n / 2; i++)
    //        {
    //            if (arr[i] != arr[n - i - 1]) {
    //                isPolyndrome = false;
    //            }
    //        }

//how many times repeated in arr
//int counterArr[20] = { 0 };
//for (int i = 0; i < 20; i++)
//{
//    counterArr[arr[i]]++;
//}

//Bubble sort
//for (int i = 0; i < size - 1; i++)
//{
//    for (int j = 0; j < size - i - 1; j++) {
//        if (arr[j] > arr[j + 1]) {
//            int temp = arr[j];
//            arr[j] = arr[j + 1];
//            arr[j + 1] = temp;
//        }
//    }
//}

//Binary search - only for sorted arrays
//while (l <= r) {
//    int m = l + (r - l) / 2;
//
//    // Check if x is present at mid
//    if (arr[m] == x)
//        return m;
//
//    // If x greater, ignore left half
//    if (arr[m] < x)
//        l = m + 1;
//
//    // If x is smaller, ignore right half
//    else
//        r = m - 1;
//}
//
//// If we reach here, then element was not present
//return -1;



