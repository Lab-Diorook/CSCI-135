/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4G

makes a checkerboard (3x3) with custom height and width.
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

    for (int row = 0; row < height; row++)
    {
        cout << endl;
        for (int col = 0; col < width; col++)
        {
            if (((row/3)%2 == 0 && (col/3)%2 != 0) || (row/3)%2 != 0 && (col/3)%2 ==0)
            {
                cout << " ";
            }

            else
            {
                cout << "*";
            }
        }
    }
}