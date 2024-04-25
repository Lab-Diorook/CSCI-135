/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2C

Creates an array of 10 digits and edits them.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int data[10];
    int index, value;

    for (int i = 0; i < 10; i++)
    {
        data[i] = 1;
    }

    do
    {
        for (int i = 0; i < 10; i++)
        {
            cout << data[i] << " ";
        }
        
        cout << endl << "Enter cell index: ";
        cin >> index;

        cout << "Enter new value: ";
        cin >> value;
        cout << endl;

        if(index < 10)
        {
            data[index] = value;
        }
    }
    
    while (0 <= index && index < 10);

    cout << "Index out of range. Exiting...";
}