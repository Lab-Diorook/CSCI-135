/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E4.8

Prints a character per line.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    string text;

    cout << "Type something: ";
    cin >> text;

    int tLen = text.length();
    for (int i = 0; i < tLen; i++)
    {
        cout << text[i] << endl;
    }
}