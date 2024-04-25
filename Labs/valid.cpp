/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2A

Asks for a number till valid.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int in;

    cout << "Enter a number: ";
    cin >> in;

    while (in <= 0 || in >= 100)
    {
        cout << "Out of range, try again. ";
        cin >> in;
    }
    cout << "Number squared is: " << in*in;
}