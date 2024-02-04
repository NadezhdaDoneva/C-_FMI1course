// finalExamPrep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

////STRINGS FUNCTIONS
size_t strLen(char str[]) {
    if (!str)
    {
        return 0;
    }

    size_t len = 0;
    while (*str++)
    {
        len++;
    }
    return len;
}
//
//char ToUpper(char c)
//{
//    if (c >= 'a' && c <= 'z')
//        return c - 'a' + 'A';
//    return c;
//}
//
//char ToLower(char c) {
//    if (c >= 'A' && c <= 'Z')
//    {
//        return c - 'A' + 'a';
//    }return -1;
//}
//
//// do not forget to copy teminating zero
//void strCopy(char str[], char dest[]) {
//    if (!str || !dest)
//    {
//        return;
//    }
//
//    while (*str)
//    {
//        *dest = *str;
//        dest++;
//        str++;
//    }
//    *dest = '\0';
//}
//
//void strConcat(char str[], char dest[]) {
//    if (!str || !dest)
//    {
//        return;
//    }
//
//    while (*dest)
//    {
//        dest++;
//    }
//    while (*str)
//    {
//        *dest = *str;
//        dest++;
//        str++;
//    }
//    *dest = '\0';
//}
//
//void strCompare(char str[], char dest[]) {
//    if (!str || !dest)
//    {
//        return;
//    }
//
//    while (*str && *dest && *str == *dest)
//    {
//        str++;
//        dest++;
//    }
//    
//    if (*str - *dest > 0)
//    {
//        cout << "Second is bigger" << endl;
//    }
//    else if (*str - *dest == 0)
//    {
//        cout << "Equal" << endl;
//    }
//    else {
//        cout << "First is bigger" << endl;
//    }
//}
//
//int main()
//{
//    //STRINGS MAIN FUNCTIONS
//    char ch = 'a';
//    cout << ToUpper(ch) << endl;
//    char upper = 'D';
//    cout << ToLower(upper) << endl;
//    char str[] = "hello";
//    char dest[20] = "XY";
//    cout << strLen(str) << endl;
//    strConcat(str, dest);
//    cout << dest << endl;
//
//    //concatinating many strings
//    char partA[] = "a";
//    char partB[] = "a";
//    char partC[] = "world!";
//    char buffer[100] = "";
//    strCopy(partA, buffer);
//    strConcat(partB, buffer);
//    strConcat(partC, buffer);
//    cout << buffer << endl;
//
//    strCompare(partA, partB);
//
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

// Deleting element from array
//void ShiftLeft(double* pArr,
//	int& Size,
//	size_t StartFrom,
//	size_t Positions)
//{
//	if (pArr == nullptr) return;
//	size_t write = StartFrom;
//	size_t read = StartFrom + Positions;
//	while (read < Size)
//	{
//		pArr[write++] = pArr[read++];
//	}
//	Size -= Positions;
//}
//void RemoveAt(double* pArr, int& Size, size_t Index)
//{
//	if (pArr != nullptr)
//		ShiftLeft(pArr, Size, Index, 1);
//}
//
//void PrintArray(const double* pArr, int Size)
//{
//	if (pArr == nullptr) return;
//	for (size_t i = 0; i < Size; i++)
//	{
//		std::cout << pArr[i] << std::endl;
//	}
//}
//
//void main()
//{
//	double data[10] = { 10, 20, 30, 40, 50, 60 };
//	int Size = 6;
//	RemoveAt(data, Size, 0);
//	PrintArray(data, Size);
//}

int fact(int n) {
	if (n == 1)
	{
		return 1;
	}
	return n * fact(n - 1);
}

int fibb(int n) {
	if (n == 1 || n == 0)
	{
		return 1;
	}
	return fibb(n - 1) + fibb(n - 2);
}

int sumArr(int arr[], int size) {
	if (size == 0)
	{
		return 0;
	}
	return arr[size - 1] + sumArr(arr, size - 1);
}

int power(int n, int k) {
	if (k == 0)
	{
		return 1;
	}
	return n * power(n, k-1);
}

int fastPower(int n, int k) {
	if (k == 0)
	{
		return 1;
	}
	if (n % 2 == 1)
	{
		return n * power(n, k - 1);
	}
	else {
		return power(n * n, k / 2);
	}
}

bool isPalinromeRec(const char* str, int size) {
	if (size <= 1)
	{
		return true;
	}
	return str[0] == str[size - 1] && isPalinromeRec(str + 1, size-2);
}

bool isPalinrome(const char* str) {
	return isPalinromeRec(str, 5);
}

bool linearSearch(int arr[], int size, int n) {
	if (size == 0)
	{
		return 0;
	}
	return arr[0] == n || linearSearch(arr + 1, size - 1, n);
}

int myMax(int a, int b)
{
	return a > b ? a : b;
}


int getMaxInArr(int arr[], int size) {
	if (size == 0)
	{
		return INT_MIN;
	}
	return myMax(arr[0], getMaxInArr(arr + 1, size - 1));
}

bool isCapital(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}


void getLowerAndUpperCount(const char* str, int& lowerCount, int& capitalCount) {
	if (!*str)
	{
		return;
	}
	if (isCapital(*str))
	{
		capitalCount++;
	}
	if (isLower(*str)) {
		lowerCount++;
	}
	return getLowerAndUpperCount(str + 1, lowerCount, capitalCount);
}

//bool binarySearch(int arr[], size_t size, int searched) {
//	if (size == 0)
//	{
//		return 0;
//	}
//	int mid = size / 2;
//	if (searched == arr[mid])
//	{
//		return true;
//	}
//	if (searched < arr[mid])
//	{
//		return binarySearch(arr, mid, searched);
//	}
//	if (searched > arr[mid])
//	{
//		return binarySearch(arr + mid + 1, size - mid - 1, searched);
//	}
//}



bool isPrefix(const char* text, const char* pattern) {
	if (!*pattern)
	{
		return true;
	}
	return *text == *pattern && isPrefix(text + 1, pattern + 1);
}

bool findInTextRec(const char* text, size_t textLen, const char* pattern, size_t patternLen) {
	if (patternLen > textLen)
		return false;

	return isPrefix(text, pattern) || findInTextRec(text + 1, textLen - 1, pattern, patternLen);
}

bool findInText(const char* text, const char* pattern)
{
	return findInTextRec(text, strlen(text), pattern, strlen(pattern));
}

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

int getSumOfNumbersInStr(const char* str, int currAccNum = 0, int globalSum = 0) {
	if (!*str)
	{
		globalSum += currAccNum;
		return globalSum;
	}

	if (isDigit(*str))
	{
		currAccNum = currAccNum * 10 + (*str - '0');
	}
	else {
		globalSum += currAccNum;
		currAccNum = 0;
	}
	return getSumOfNumbersInStr(str + 1, currAccNum, globalSum);
}

void genBoolVectors(bool* arr, size_t size, unsigned beginIndex = 0)
{
	if (beginIndex == size)
	{
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
		return;
	}
	arr[beginIndex] = 0;
	genBoolVectors(arr, size, beginIndex + 1);
	arr[beginIndex] = 1;
	genBoolVectors(arr, size, beginIndex + 1);
}

//1zad
//bool containsInArr(char ch, char arr[], int size) {
//	for (size_t i = 0; i <= size; i++)
//	{
//		if (arr[i] == ch) {
//			return true;
//		}
//	}
//	return false;
//}
//
//int printCountOcurances(char arr[], int size) {
//	int count = 0;
//	for (size_t i = 0; i < size; i++)
//	{
//		if (arr[i] != 0) {
//			count++;
//		}
//	}
//	return count;
//}
//
//void checkIfInArr(const char* str, char arr[]) {
//	int size = 0;
//	while (*str)
//	{
//		if (!containsInArr(*str, arr, size)) {
//			arr[size] = *str;
//			size++;
//		}
//		str = str + 1;
//	}
//	printCountOcurances(arr, size);
//}
//
//int analyzeArr(const char* str) {
//	if (!*str)
//	{
//		return -1;
//	}
//
//	char arr[1000] = { 0 };
//	checkIfInArr(str, arr);
//}

//zad2
//long power(long n,int p) {
//	for (size_t i = 0; i < p; i++)
//	{
//		n *= n;
//	}
//	return n;
//}
//
//int getNumLen(long n) {
//	unsigned int res = 0;
//	while (n != 0) {
//		res++;
//		n /= 10;
//	}
//	return res;
//}
//
//bool isDivisableByThree(int num) {
//	for (size_t i = 0; i*3 <= num; i++)
//	{
//		if (i * 3 == num) {
//			return true;
//		}
//	}
//	return false;
//}
//
//int checkNum(long n) {
//	if (!n || n > power(10, 9))
//	{
//		return -1;
//	}
//
//	if (n < 0)
//	{
//		n = -n;
//	}
//
//	int len = getNumLen(n);
//
//	//1234 / 1000 = 1
//	//1234 - 1000 = 234
//	//total sum
//	int total = 0;
//	long num = n;
//	for (size_t i = len; i > 0; i--)
//	{
//		total += num / power(10, i-1);
//		num -= power(10, i - 1) * (num / power(10, i - 1));
//	}
//	//sum without some digit
//	for (size_t i = len; i > 0; i--)
//	{
//		int totalCopy = total - n / power(10, i-1);
//		n -= power(10, i - 1) * (n / power(10, i - 1));
//		if (isDivisableByThree(totalCopy)) {
//			return len - i + 1;
//		}
//	}
//}

////zad3
//int intFromChar(char ch) {
//	return ch;
//}
//
//char numToChar(int n) {
//	return n;
//}
//void printStr(char* str, int len) {
//	while (*str)
//	{
//		cout << *str;
//		str += 1;
//	}
//}
//
//char* encodeWord(char* str, int n) {
//	int len = strLen(str);
//	int idx = 0;
//	char* newStr = new char[len+1] {0};
//	if (!*str)
//	{
//		return newStr;
//	}
//	while (*str)
//	{
//		int num = intFromChar(*str);
//		num += n;
//		if (num < 32 || num > 126)
//		{
//			return newStr;
//		}
//		newStr[idx] = numToChar(num);
//		idx += 1;
//		str += 1;
//	}
//	newStr[idx] = '\0';
//	printStr(newStr, len);
//	return newStr;
//}
//
//bool inputValidation(char* str, int n) {
//	if (!*str || n < 2  || n > 49)
//	{
//		return false;
//	}
//	return true;
//}

//zad4
//unsigned int getGCD(const unsigned int* arr, size_t size) {
//	unsigned int min = arr[0];
//	for (int i = 1; i < size; i++)
//	{
//		if (arr[i] != 0 && arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//
//	bool isFound = false;
//	while (min > 0) {
//		for (size_t i = 0; i < size; i++)
//		{
//			if (arr[i] % min != 0) {
//				min--;
//				continue;
//			}
//			else if (i == size - 1)
//			{
//				return min;
//			}
//		}
//		if (min == 1)
//		{
//			return 1;
//		}
//		min--;
//	}
//}


//zad 5
//unsigned short int reverseBitwise(unsigned short int n) {
//	unsigned short int newNum = 0;
//	int bits = 16;
//	while (bits != 0)
//	{
//		(newNum <<= 1) += (1 & n);
//		n >>= 1;
//		bits--;
//	}
//	return newNum;
//}

void main() {
	//cout << fact(5) << endl;
	//cout << fibb(5) << endl;
	//int arr[] = { 1,2,3,4,5 };
	//cout << sumArr(arr, 5) << endl;
	//cout << power(2, 8) << endl;
	//cout << fastPower(2, 8) << endl;
	//cout << isPalinrome("abcba") << endl;
	//int arr1[] = { 1, 2, 6, 3, 1 };
	//cout << linearSearch(arr1, 5, 3) << endl;
	//cout << getMaxInArr(arr1, 5) << endl;
	//int lowers = 0, capitals = 0;
	//getLowerAndUpperCount("afsdfsdSDFFDS", lowers, capitals);
	//cout << lowers << " " << capitals << endl;
	//int arr2[] = { 1,5,7,12,14,20 };
	////cout << binarySearch(arr2, 6, 5) << endl;
	//cout << findInText("abcba", "cb") << endl;
	//cout << getSumOfNumbersInStr("asd123as33d3") << endl;
	//const size_t SIZE = 4;
	//bool arr3[SIZE];
	//genBoolVectors(arr3, SIZE);

	//zad1
	/*cout << analyzeArr("a.wq22");*/

	//zad2
	/*long n;
	cin >> n;
	cout << checkNum(n);*/

	//zad3
	/*char str[] = "abcd";
	int n;
	cin >> n;
	if (inputValidation(str, n))
	{
	encodeWord(str, n);
	}*/

	//zad4
	/*unsigned int arr[] = { 4,8,32,0,3 };
	cout << getGCD(arr, 5);*/

	//zad 5
	/*unsigned short int n = 1;
	cout << reverseBitwise(n);*/


}