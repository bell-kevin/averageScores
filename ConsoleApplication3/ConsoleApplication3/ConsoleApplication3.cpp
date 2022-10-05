// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int score1, score2, score3;
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;   // user enters 90 94 96
    double average = (score1 + score2 + score3) / 3.0;
    cout << "Your average is " << average << " which is ";
    if (average > 90)
        cout << "an A";
    else if (average >= 80)
        cout << "a B";
    else if (average >= 70)
        cout << "a C";
    else if (average >= 60)
        cout << "a D";
    else if (average < 60) 
        cout << "an F";
    //Keep window open til done
    system("pause");
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
