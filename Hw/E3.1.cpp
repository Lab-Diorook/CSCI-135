/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1

Checks if an int is positive, negative, or 0.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Negative number";
    }

    else if (num > 0)
    {
        cout << "Positive number";
    }

    else
    {
        cout << "Number is zero";
    }
}