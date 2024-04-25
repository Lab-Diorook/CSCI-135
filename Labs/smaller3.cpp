/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

Find the smaller of three integers.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    if (num1 < num2 && num1 < num3)
    {
        cout << num1;
    }

    else if (num2 < num1 && num2 < num3)
    {
        cout << num2;
    }

    else
    {
        cout << num3;
    }

}