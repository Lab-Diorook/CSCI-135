/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4E

prints the top-right half of a square
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size: ";
    cin >> size;

    for (int row = 0; row < size; row++)
    {
        cout << endl;

        for (int col = 0; col <= size; col++)
        {
            if (row < col)
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