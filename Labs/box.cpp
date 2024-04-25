/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4A

makes a box with custom height and width
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int width, height;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        cout << endl;
        for (int i = 0; i < width; i++)
        {
            cout << "*";
        }
    }
}