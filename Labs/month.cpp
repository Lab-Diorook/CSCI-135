/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1D

Find the number of days in a given month.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int year; 
    int month;
    bool leap = false;
    
    cout << "Enter year: ";
    cin >> year;
    
    cout << "Enter month: ";
    cin >> month;

    if (month == 2)
    {
        if (year%4 == 0 && year%100 != 0)
        {
            cout << "29";
        }

        else if (year%100 == 0 && year%400 == 0)
        {
            cout << "29";
        }

        else
        {
            cout << "28";
        }
    }

    else if (month%2 == 1 && month <= 7)
    {
        cout << "31";
    }

    else if (month%2 == 0 && month > 7)
    {
        cout << "31";
    }

    else
    {
        cout << "30";
    }
}