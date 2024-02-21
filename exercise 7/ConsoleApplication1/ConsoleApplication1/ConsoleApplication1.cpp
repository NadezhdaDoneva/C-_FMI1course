// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//13 char + 1 terminating zero
const int BUFFER_SIZE = 100 + 1;

//pr3
int* getMax(int& a, int& b) {
    return (a > b) ? &a : &b;
}

//functions
int size(char buffer[]) {
    int size = 0;
    while (buffer[size])
    {
        size++;
    }
    return size;
}

//hello
//zad1
//bool isPolyndrom(char buffer[], int sizeOfStr){
//    for (int i = 0; i < sizeOfStr; i++)
//    {
//        if (buffer[i] != buffer[sizeOfStr - i - 1]) {
//            return false;
//        }
//        return true;
//    }
//}

//zad2
void countOfPunctuationMarks(char buffer[], int sizeOfStr) {
    int countOfExclamanation = 0;
    int countOfQuestion = 0;
    int countOfCommas = 0;
    for (size_t i = 0; i < sizeOfStr; i++)
    {
        if (buffer[i]=='!')
        {
            countOfExclamanation++;
        }
        else if (buffer[i] == '?') {
            countOfQuestion++;
        }
        else if (buffer[i]==',')
        {
            countOfCommas++;
        }
    }

    cout << "!: " << countOfExclamanation << endl;
    cout << "?: " << countOfQuestion << endl;
    cout << ",: " << countOfCommas << endl;
}

//zad3
void countOfWords(char buffer[], int sizeOfStr) {
    int countOfWords = 1;
    for (int i = 0; i < sizeOfStr; i++)
    {
        if (buffer[i] == ' ') {
         
            countOfWords++;
        }
    }
    while (buffer[sizeOfStr - 1] == ' ')
    {
        countOfWords--;
        sizeOfStr--;
    }
    cout << "Count of words is: " << countOfWords;
}

//zad4
void transformIntoLowerCase(char buffer[], int sizeOfStr) {
    for (int i = 0; i < sizeOfStr; i++)
    {
        buffer[i] = buffer[i] + 32;
    }
    cout << buffer;
}

//zad5
void lettersInFirstNotInSecond(char buffer1[], char buffer2[], int sizeOfStr1, int sizeOfStr2) {
    for (int i = 0; i < sizeOfStr1; i++)
    {
        if (buffer1[i] >= 'a' && buffer1[i] <= 'z') {
            bool isRepeated = false;
            for (int j = 0; j < sizeOfStr2; j++)
            {
                if (buffer1[i] == buffer2[j]) {
                    isRepeated = true;
                }
            }
            if (!isRepeated)
            {
                cout << buffer1[i];
            }
        }
    }
}

//zad6
void areDifferentLetters(char buffer[], int sizeOfStr) {
    bool areRepetitive = false;
    for (int i = 0; i < sizeOfStr; i++)
    {
        for (int j = i + 1; j < sizeOfStr; j++) {
            if (buffer[i]==buffer[j])
            {
                areRepetitive = true;
                cout << "There are some repetitive letters";
                break;
            }
        }
        if (areRepetitive)
        {
            break;
        }
    }
    if (!areRepetitive)
    {
        cout << "There are no repetitive letters";
    }
}

//zad7
int timesRepeatedInAnotherStr(char buffer1[], char buffer2[], int sizeOfStr1, int sizeOfStr2) {
    int counter = 0;
    for (int i = 0; i < sizeOfStr1; i++)
    {
        for (int j = 0; j < sizeOfStr2; j++) {
            if (buffer1[i] == buffer2[j]){
                int size = sizeOfStr2;
                int increment = 0;
                while (size != 0 && buffer1[i + increment] == buffer2[j + increment]) {  
                        increment++;
                        size--;
                }
                if (size==0)
                {
                    counter++;
                }
            }
        }
    }
    return counter;
}

//zad8
void beginAndEnd(char buffer[], int sizeOfStr) {
    int countBegin = 0;
    int countEnd = 0;
    char begin[] = "begin";
    char end[] = "end";
    for (int i = 0; i < sizeOfStr; i++)
    {
        int j = 0;
        int incrementB = 0;
        int incrementE = 0;
        while (j<5 && buffer[i + incrementB] == begin[j])
        {
            j++;
            incrementB++;
        }
        if (j==4)
        {
            countBegin++;
        }

        int k = 0;
        while (k < 3 && buffer[i + incrementE] == end[k])
        {
            k++;
            incrementE++;
        }
        if (k == 2)
        {
            countEnd++;
        }
    }
    if (countBegin==countEnd)
    {
        cout << "Euqal number of times";
    }
    else {
        cout << "Different number of times";
    }
}

int myStrcmp(const char* first, const char* second)
{
    if (!first || !second)
        return 0; //some error value

    //we skip the common prefix, but not the terminating zero!
    while ((*first) && (*second) && ((*first) == (*second))) //acutally the (*second) check can be missed here.
    {
        first++;
        second++;
    }

    return (*first - *second);

}

unsigned int strLen(char* str) {
    unsigned int len = 0;
    if (!str)
        return 0;

    while (*str) {
        len++;
        str++;
    }
    return len;
}

bool strCompare(char* str, char* pattern) {
    if (!str || !pattern)
    {
        return 0;
    }

    while (*str && *pattern)
    {
        if (*str != *pattern)
            return false;
        else {
            pattern++;
            str++;
        }

    }
    if (!*str && !*pattern)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char buffer[10];
    cin.getline(buffer, 10);
    char buffer2[10];
    cin.getline(buffer2, 10);
    if (strCompare(buffer, buffer2))
        cout << "Yes";
    else
        cout << "No";
    //SEMINAR
    //pr1
    /*int *ptr;
    int num = 10;
    ptr = &num;
    cout << *ptr << endl;

    cout << "Value of num: " << num << endl;
    cout << "Addres of num: " << &num << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Addres stored in pointer: " << ptr << endl;
    cout << "Addres of pointer: " << &ptr << endl;*/

    //pr2
    /*int num = 10;
    int* ptr = &num;
    int** doublePtr = &ptr;

    cout << "Value of num: " << num << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Addres stored in pointer: " << ptr << endl;
    cout << "Addres stored in pointer using double pointer: " << *doublePtr << endl;
    cout << "Value using double pointer: " << **doublePtr << endl;*/

    //поинтър към константна стойност означава че не можем да променяме стойността през поинтъра
    //константен поинтър означава че адреса към който сочи не може да бъде променен

    //pr3
    //int x = 5, y = 10;
    //int* ptr = getMax(x, y);
    //cout << "value pointed by ptr: " << *ptr << endl;

    //pr4
    //int arr[] = { 1,2,3 };
    //int* ptr = arr;
    //cout << (arr[0] == ptr[0]) << endl;

    //ptr++;
    //cout << *ptr << endl;
    //cout << ptr[0] << endl; //2
    //cout << ptr[1] << endl; //3

    //всеки стринг завършва с терминираща нула \0
    // '9'-48 = 9
    // от 'А' до 'а' има 32 символа
    
    //pr5
    /*char buffer[BUFFER_SIZE];
    cin.getline(buffer, BUFFER_SIZE, ',');
    cout << buffer << endl;*/

    //PRAKTIKUM
    
    //zad1
    //char buffer[BUFFER_SIZE];
    //cin.getline(buffer, BUFFER_SIZE);
    //int sizeOfStr = size(buffer);
    //bool polyndrom = isPolyndrom(buffer, sizeOfStr);
    //if (polyndrom)
    //{
    //    cout << "It is polyndrom";
    //}
    //else {
    //    cout << "Not a polyndrom";
    //}

    //zad2
    /*char buffer[BUFFER_SIZE];
    cin.getline(buffer, BUFFER_SIZE);
    int sizeOfStr = size(buffer);
    countOfPunctuationMarks(buffer, sizeOfStr);*/

    //zad3
    //char buffer[BUFFER_SIZE];
    //cin.getline(buffer, BUFFER_SIZE);
    //int sizeOfStr = size(buffer);
    //countOfWords(buffer, sizeOfStr);

    //zad4
    //char buffer[BUFFER_SIZE];
    //cin.getline(buffer, BUFFER_SIZE);
    //int sizeOfStr = size(buffer);
    //transformIntoLowerCase(buffer, sizeOfStr);

    //zad5
    //char buffer1[BUFFER_SIZE];
    //cin.getline(buffer1, BUFFER_SIZE);
    //int sizeOfStr1 = size(buffer1);

    //char buffer2[BUFFER_SIZE];
    //cin.getline(buffer2, BUFFER_SIZE);
    //int sizeOfStr2 = size(buffer2);

    //lettersInFirstNotInSecond(buffer1, buffer2, sizeOfStr1, sizeOfStr2);

    //zad6
    //char buffer[BUFFER_SIZE];
    //cin.getline(buffer, BUFFER_SIZE);
    //int sizeOfStr = size(buffer);
    //areDifferentLetters(buffer, sizeOfStr);

    //zad7
    //char buffer1[BUFFER_SIZE];
    //cin.getline(buffer1, BUFFER_SIZE);
    //int sizeOfStr1 = size(buffer1);

    //char buffer2[BUFFER_SIZE];
    //cin.getline(buffer2, BUFFER_SIZE);
    //int sizeOfStr2 = size(buffer2);

    //int count = timesRepeatedInAnotherStr(buffer1, buffer2, sizeOfStr1, sizeOfStr2);
    //cout << "S2 is repeated " << count << " times";

    //zad8
    /*char buffer[BUFFER_SIZE];
    cin.getline(buffer, BUFFER_SIZE);
    int sizeOfStr = size(buffer);
    beginAndEnd(buffer, sizeOfStr);*/

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

