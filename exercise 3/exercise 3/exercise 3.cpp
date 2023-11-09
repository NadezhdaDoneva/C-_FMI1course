// exercise 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;





int main()
{
	//SEMINAR
	/*int arr[5];
	int arr_size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < arr_size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	//obrushtane na elementite v masiv
	/*int arr[5];
	int arr_size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < arr_size; i++)
	{
		cin >> arr[i];
	}
	for (int i = arr_size-1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	//int arr[5] = {1,2,3,4,5};
	//
	////works only for cout, does not work for cin
	//for (int i : arr) {
	//	cout << i << " ";
	//}
	//cout << endl;

	//elements of arr2 = elements of arr1
	/*const int size = 5;
	int arr1[] = { 1,2,3,4,5 };
	int arr2[size];

	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr1[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}*/

	/*const int size = 5;
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = {1,2,3,4,5};
	bool equal = true;
	for (int i = 0; i < size; i++)
	{
		if (arr1[i] != arr2[i]) {
			equal = false;
			break;
		}
	}
	cout << "arrays are " << (equal ? "" : "not ") << "equal\n";*/
	

	//PRAKTIKUM

	//zad0
	/*const int size = 5;
	int arr[] = { 1,2,3,4,5 };
	int temp;
	for (int i = 0; i < size/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}*/

	//zad1
	/*int gradeCount;
	cout << "Enter grade count: " << endl;
	cin >> gradeCount;
	double sum = 0;
	double arr[50];
	
	if(gradeCount<=50){
		for (int i = 0; i < gradeCount; i++)
		{
			cin >> arr[i];
		}
		
		for (int i = 0; i < gradeCount; i++)
		{
			sum += arr[i];
		}
		double avrg = sum / gradeCount;
		cout << avrg;
	}
	else {
		cout << "too much grades!";
	}*/

	//zad2
	/*int size;
	cout << "enter size:";
	cin >> size;
	int arr[24];
	int positiveSum = 0;
	int negativesCount = 0;
	if (size < 24) {
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < size; i++)
		{
			
			if (arr[i] >= 0) {
				positiveSum += arr[i];
			}
			else {
				negativesCount++;
			}
		}
		cout << "Positives sum: " << positiveSum << endl;
		cout << "Negatives count: " << negativesCount << endl;
	}*/
	
	//zad3
	/*int arr1[50];
	int arr2[50];
	int sum = 0;

	int size;
	
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < size; i++)
	{
		cin >> arr2[i];
	}

	for (int i = 0; i < size; i++)
	{
		sum += arr1[i] * arr2[i];
	}
	cout << sum;*/

	//zad4
	/*int size;
	int arr[50];
	cin >> size;
	

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	if (size > 0)
	{
		int min = arr[0];
		int max = arr[0];

		for (int i = 1; i < size; i++)
		{

			if (arr[i] > max) {
				max = arr[i];
			}
			if (arr[i] < min) {
				min = arr[i];
			}
		}
		cout << max << endl;
		cout << min;
	}*/
	
	//zad5
	/*int size;
	int arr[50];
	cin >> size;


	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
		int max = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] > max) {
				max = arr[i];
			}
		}
		cout << "Max is: " << max << endl;
		for (int i = 0; i < size; i++)
		{
			if (max == arr[i]) {
				cout << i;
			}

		}*/

		//zad6
		/*int arr1[50];
		int arr2[50];
		int countEuqal = 0;

		int size;

		cin >> size;

		for (int i = 0; i < size; i++)
		{
			cin >> arr1[i];
		}
		for (int i = 0; i < size; i++)
		{
			cin >> arr2[i];
		}

		for (int i = 0; i < size; i++)
		{
			if (arr1[i]==arr2[i])
			{
				countEuqal++;
			}
		}
		cout << countEuqal;*/


		//zad7
		/*int size;
		int arr[50];
		cin >> size;
		int x;
		cin >> x;
		int counter = 0;


		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < size; i++)
		{
			if (x == arr[i]) {
				counter++;
			}
		}

		cout << counter;*/


		//zad8
		/*int size;
		int arr[50];
		cin >> size;
		int x;
		cin >> x;
		bool isThere = false;


		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < size; i++)
		{
			if (x == arr[i]) {
				isThere = true;
				break;
			}
		}

		if (isThere)
		{
			cout << "the number is contained in the sequence";
		} else {
			cout << "the number is not contained in the sequence!";
		}*/


		//zad9
		int size;
		int arr[50];
		cin >> size;
		int x;
		cin >> x;
		bool isGrowing = true;

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		for (int i = 1; i < size; i++)
		{
			if (arr[i] < arr[i - 1]) {
				isGrowing = false;
				break;
			}
		}

		if (isGrowing) {
			cout << "monotonno rastqshta";
		}
		else {
			cout << "ne e monotonno rastqshta";
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
