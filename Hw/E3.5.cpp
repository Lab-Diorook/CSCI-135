/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.5

checks if the 3 inputted numbers are either increasing, decreasing, or neither.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 < num2 && num2 < num3)
    {
        cout << "Increasing";
    }
    
    else if (num1 > num2 && num2 > num3)
    {
        cout << "Decreasing";
    }

    else
    cout << "Neither";
}