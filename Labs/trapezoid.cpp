/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4E

prints an upside-down trapezoid with custom length and width
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    double width, height;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

 

    for (int row = 0; row < height; row++)
    {
        if (width/2 <= height-1)
        {
            cout << "Impossible Shape!";
            break;
        }

        cout << endl;

        for (int col = 0; col <= width; col++)
        {
            if (row <= col && col <= width-row-1)
            {
                cout << "*";
            }
            else 
            {
                cout << " ";
            }
        }
    }
}