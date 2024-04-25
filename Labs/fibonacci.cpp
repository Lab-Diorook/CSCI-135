/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2D

Prints the fibonacci sequence.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int num[60];

    num[0] = 0;
    num[1] = 1;

    for (int i = 0; i < 60; i++)
    {
        num[i] = num[i-1] + num[i-2];
        cout << num[i] << endl;
    }
}