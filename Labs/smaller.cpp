/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

Find the smaller of two integers.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if (num1 < num2)
    {
        cout << num1;
    }

    else
    {
        cout << num2;
    }

}