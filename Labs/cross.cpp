/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4C

prints a cross with custom size
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
            if (row == col || col == size-row-1)
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