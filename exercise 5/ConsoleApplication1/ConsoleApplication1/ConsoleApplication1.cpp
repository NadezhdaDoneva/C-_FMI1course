// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print(int arr[][2], const int n, const int m) {

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int main()
{
	//SEMINAR

	//obhojdane na masiv
    /*int arr[][2] = { {1,2}, {3,4}, {5,6} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++) {
			cout << arr[i][j];
		}
	}*/

	/*int arr[][3] = { {1,2,3}, {3,4,5}, {5,6,7} };
	int const n = 3;
	int const m = 3;
	print(arr, n, m);*/

	/*cout << "New matrix:" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++) {
			arr[i][j] += 1;
			cout << arr[i][j];
		}
		cout << endl;
	}*/

	//print the diagonal
	//int arr[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	//int const n = 3;
	//int const m = 3;
	//print(arr, n, m);
	//cout << "The diagonal is: ";
	///*for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++) {
	//		if (i == j) {
	//			cout << arr[i][j];
	//		}
	//	}
	//}*/
	////print the diagonal 2
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i][i];
	//}

	//transponirane na matrica
	/*int arr[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int const n = 3;
	int const m = 3;
	print(arr, n, m);

	cout << "Transponirana matrix:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout << arr[j][i];
		}
		cout << endl;
	}*/


	/*int arr[3][2] = { {1,2}, {4,5}, {7,8} };
	int newArr[2][3] = {};
	int const n = 3;
	int const m = 3;
	print(arr, n, m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			newArr[j][i] = arr[i][j];
		}
	}*/

	int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int const n = 3;
	int const m = 3;

	/*
	123
	456
	789

	123 69 87 45
	369 87 41 25
	*/
	//

	//Print the right column from top to bottom
	int rowStart = 0;
	int rowEnd = 2;
	int colEnd = 2;
	int colStart = 0;
	for (int i = rowStart; i <= rowEnd;  i++)
	{
		cout << arr[i][colEnd];
	}

	//Decrement the ending column index
	colEnd--;

	//Print the bottom row from right to left
	if (rowStart <= rowEnd) {
		for (int i = colEnd; i >= colStart; i--)
		{
			cout << arr[rowEnd][i] << " ";
		}
	}

	//Decrememnt the ending row index
	rowEnd--;

	//Print the left column from bottom to top
	if (colStart<=colEnd)
	{
		for (int i = rowEnd; i >= rowStart; i--) {
			cout << arr[i][colStart] << " ";
		}
	}

	//Increment the starting column index
	colStart++;


	//Print top column from right to left
	if (colEnd<=colStart)
	{
		for (int i = rowStart; i <= rowEnd; i++) {
			cout << arr[i][colEnd] << " ";
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
