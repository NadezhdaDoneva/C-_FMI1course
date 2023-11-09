// firstExamPrep.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


//zad2
//int fun(int num)
//{
//    cout << ++num;
//    return num * 3;
//}

//zad3
//int Sum(int a, int b, int c, int d = -5) {
//    return a + b + c + d;
//}

//zad4
//int f(int a = 15, int b = 12)
//{
//    return a + b;
//}



int main()
{
    ////postfix operation
    //int a = 0;
    //cout << a++ << endl;
    ////prefix operation
    //int b = 0;
    //cout << ++b;


    //division of floating point numbers
    /*float a = float(5.0 / 9);
    cout << a;*/


    //only lvalue can be changed
    //int a = 25;
    //--a = 22; //returns 22
    ///*a-- = 22;*/ //wont compile
    //cout << a;


    //scopes; ++b and b++ always change the value even out of the scope
    /*int a = 1;
    int b = 1;
    {
        int a = ++b * 3;
        int b = 12;
        ++a;
        cout << a<< b << endl;
    }
    cout << a << b;*/

    //ternary operator
    //int a = 20;
    //int b = a != 0 ? 100 / a : 0;
    //cout << b;


    //primerche s razburkan while
    /*int Value = 0;
    cout << "Enter an integer: ";
    cin >> Value;
    int Factoriel = 1;
    int Counter = 1;
    while (Factoriel *= Counter, ++Counter <= Value);
    cout << Counter;
    cout << Value << "! = " << Factoriel << endl;*/

    //all these cycles do the same
    //for
    //    (int i = 0; i <= 10; i++)
    //    cout << i << endl
    //    ;
    ////-----------------------------------------------
    //int i = 0;
    //for (; i <= 10; i++)
    //    cout << i << endl
    //    ;
    ////-----------------------------------------------
    /*int i = 0;
    for (; i <= 10;)
        cout << i++ << endl
        ;*/
        ////-----------------------------------------------
        /*int i = 0;
        for (;;) {
            if (i > 10) break
                ;
            cout << i++ << endl
                ;
        }*/
        ////-----------------------------------------------
        /*for
            (int i = 0; i <= 10; cout << i << endl, i++)
            ;*/

            //Primerni zad

            //TEMA 1:
            //zad1 - 65
                /*int a = 'A';
                std::cout << a << std::endl;*/

                //zad2 - won't compile because char needs 'A' single apostrophes
                /*char a = "A";
                std::cout << a << std::endl;*/

                //zad3
                //double a = 65;
                //bool b = !a; //b = false;
                //b += 2; //b = true;
                //char c = ++a; //c = B a = 66  ??????????
                //double d = (--a) / 2; //a=65, d=32
                //int f = (a > 3); //f=1
                //std::cout << b << " " << c << " " << d << " " << f << std::endl;


                //zad4
                //int a = 1;
                //int b = !!(a--);//a=0; b=1
                //cout << b;
                //unsigned c = b == 1 ? b : !b; //c=1; b=1
                //cout << a << endl<< b << endl;
                //std::cout << c << std::endl;

                //zad5
                //double a = 19.03;
                //double b = 4.91;
                //int c = a + b; //c=23
                //double d = c / (2 * 1.0); //d=11.5
                //std::cout << c << " " << d << std::endl;

                //zad6
                /*int n = 10;
                std::cout << ((n < 3) && (n / !n));*/ //0

                //zad7
                //int n = 10;
                //std::cout << n / !n; //inf

                //zad8
                //{
                //    int a = 10;
                //    {
                //        a += 5; //middle a=15
                //        ::a += 5; //global a=105
                //        int a = 3; //inner a=3
                //        a += 2; //inner a = 5
                //        cout << a << endl; //5
                //    }
                //    std::cout << a << std::endl; //15
                //    }
                //std::cout << a << std::endl; //105



                //TEMA 2:
                //zad 1 ????
                /*int a = 7;
                if (a = 0, 1, 2)
                std::cout << a << std::endl;
                else
                std::cout << 12 << std::endl;*/

                //zad2 ??????
                /*int a = 23;
                if (a -= a += 3) 
                    a++;
                std::cout << a;*/

                //zad3 ?????
                /*int a = 23;
                if (a != 3)
                --a++;
                std::cout << a;*/
       


                //TEMA 3:
                //zad1
                //int a = 10;
                //while (a != 0); // infinite loop
                //std::cout << a-- << std::endl; 

                //zad2 ???????
                /*for (int i = 10; i > 0; i--, std::cout << i % 2 << " " << std::endl); */

                //zad3
                /*int i = 6;
                while (std::cout << i, ----i);*/


            //TEMA 4:
            //zad1
            /*int a = 10;
            int& b = a;
            int c = 12;
            b = c;
            c--;
            cout << b<< endl << a;*/

            //zad2
            //int num = 10;
            /*fun(num);
            cout << num;*/

            //zad3 ?????????
            /*int num = 10;
            std::cout << Sum(num++, num + 10, ++num);*/

            //zad4 ??????
            //7,8,9 - dvusmisleni

            //zad5
            /*cout << f() << endl;
            cout << f(1) << endl;
            cout << f(1, 2) << endl;*/



     //primeren ixpit
     //zad1
     /*for (int i = 9; i <= 23; cout << i << endl) i++;
     std::cout << "Hello World!\n";*/

     //zad2
     /*int num1 = 5;
     int num2 = 13;
     num1++ = ++num1 + 12;
     cout << num1;*/
     //Кодът няма да се компилира, защото num2++ е постфиксна операция, която е rvalue. За да се компилира, на нейно място
     // би трябвало да стои lvalue, защото lvalue-тата са място в паметта със стойност, която може да се променя. Rvalue е временна
     // стойност без място в паметта.  


                //zad3
        /*int b = 1;
        if (b == 1) {
            cout << "one" << endl;
        }
        if (b != 3) {
            cout << "13" << endl;
        }
        else if (b > 3) {
            cout << "big" << endl;
        }
        else {
            cout << "error" << endl;
        }
        int a = 1;
        switch (a) {
        case 1:
            cout << "one" << endl << "13" << endl;
            break;
        case 3:
            cout << "error" << endl;
            break;

        default:
            cout << "13" << endl;
            break;
        }*/
 

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
