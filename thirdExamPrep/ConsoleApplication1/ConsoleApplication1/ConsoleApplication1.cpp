//// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
////
//
//#include <iostream>
//using namespace std;
//const int MAX_SIZE = 12;
//const int BUFFER_SIZE = 100 + 1;
//
//unsigned size(char buffer[]) {
//	unsigned size = 0;
//	while (buffer[size]) {
//		size++;
//	}
//	return size;
//}
//
//void findWord(char matrix[MAX_SIZE][MAX_SIZE], char buffer[], int width, int height ) {
//	int strIdx = 0;
//	bool isThere = false;
//	int sizeOfStr = size(buffer);
//	for (int i = 0; i < width; i++)
//	{
//		for (int j = 0; j < height; j++)
//		{
//			if (matrix[i][j] == buffer[strIdx]) {
//				strIdx++;
//			}
//			if (strIdx == sizeOfStr)
//			{
//				isThere = true;
//				break;
//			}
//		}
//		if (isThere)
//		{
//			break;
//		}
//	}
//	if (isThere)
//	{
//		cout << "The word is contained in the str";
//	}
//	else {
//		cout << "The word is not contained in the str";
//	}
//}
//
//char decimalToChar(unsigned number) {
//	if (0 <= number && number <= 9) {
//		return number + '0';
//	}
//	if (10 <= number && number <= 36) {
//		return (number - 10) + 'A';
//	}
//
//	return 0;
//}
//
//unsigned charToDecimal(char ch) {
//	if ('0' <= ch && ch <= '9') {
//		return ch - '0';
//	}
//	if ('A' <= ch && ch <= 'Z') {
//		return ch - 'A' + 10;
//	}
//
//	return 0;
//}
//
//void mySwap(char& first, char& second) {
//	unsigned temp = first;
//	first = second;
//	second = temp;
//}
//
//void reverseArray(char* arr, unsigned length) {
//	for (unsigned i = 0; i < length / 2; i++) {
//		mySwap(arr[i], arr[length - i - 1]);
//	}
//}
//
//void fromDecimalToAnyBase(unsigned decimal, char* result, unsigned& resultLength, unsigned toBase) {
//	resultLength = 0;
//	while (decimal != 0) {
//		unsigned lastDigit = decimal % toBase;
//		result[resultLength++] = decimalToChar(lastDigit);
//		decimal /= toBase;
//	}
//
//	reverseArray(result, resultLength);
//}
//
//unsigned fromAnyBaseToDecimal(const char* numberArr, unsigned& numberLength, unsigned fromBase) {
//	unsigned result = 0;
//	for (
//		int i = numberLength - 1, multiplier = 1;
//		i >= 0;
//		i--, multiplier *= fromBase
//		) {
//		result += charToDecimal(numberArr[i]) * multiplier;
//	}
//
//	return result;
//}
//
//void myStrcpy(const char* source, char* dest)
//{
//	if (!source || !dest)
//		return;
//	while (*source)
//	{
//		*dest = *source;
//		dest++;
//		source++;
//	}
//	*dest = '\0';
//	cout << dest;
//}
//
//int main()
//{
//    //zad1
//   /* char matrix[MAX_SIZE][MAX_SIZE];
//	int width;
//	cin >> width;
//	int height;
//	cin >> height;
//	for (int i = 0; i < width; i++)
//	{
//		for (size_t j = 0; j < height; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//
//	char buffer[BUFFER_SIZE];
//	cin.getline(buffer, BUFFER_SIZE);
//
//	findWord(matrix, buffer, width, height);*/
//}
//
//// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
//// Debug program: F5 or Debug > Start Debugging menu
//
//// Tips for Getting Started: 
////   1. Use the Solution Explorer window to add/manage files
////   2. Use the Team Explorer window to connect to source control
////   3. Use the Output window to see build output and other messages
////   4. Use the Error List window to view errors
////   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
////   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
#include <iostream>
using namespace std;

unsigned myStrlen(const char* str)
{
	if (!str)
		return 0;

	unsigned result = 0;
	while (*str) //is the same as (*str) != '\0'
	{
		result++;
		str++;
	}
	return result;
}

//copy the source to destination.
//We assume that in dest the are enough cells.
void myStrcpy(const char* source, char* dest)
{
	if (!source || !dest)
		return;
	while (*source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';

}

// - first < second
// 0 first == second
// + first > second
int myStrcmp(const char* first, const char* second)
{
	if (!first || !second)
		return 0; //some error value

	//we skip the common prefix, but not the terminating zero!
	while ((*first) && (*second) && ((*first) == (*second)))
	{
		first++;
		second++;
	}

	cout << (*first - *second);

}

//
void myStrCat(char* first, const char* second)
{
	if (!first || !second)
		return;

	size_t firstLen = myStrlen(first);
	first += firstLen;
	myStrcpy(second, first);
}
//int main()
//{
//	char str[20] = "ABC";
//	char str2[] = "XY";
//	myStrCat(str, str2);
//	myStrcmp(str, str2);
//	cout << str;
//}

bool isPrefix(const char* pattern, const char* text)
{
	while (*text != '\0' && *pattern != '\0')
	{
		if (*text != *pattern)
			return false;
		text++;
		pattern++;
	}
	return *pattern == '\0';
}

bool searchInText(const char* text, const char* pattern)
{
	size_t textLen = strlen(text);
	size_t patternLen = strlen(pattern);
	while (patternLen <= textLen)
	{
		if (isPrefix(pattern, text))
			return true;
		text++; //подминаваме първия символ
		textLen--;
	}
	return false;
}

int main()
{
	char str[] = "hello guys!";
	char pattern[] = "guys";

	cout << searchInText(str, pattern);

}