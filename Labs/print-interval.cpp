/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 2B

Prints out all integers in a range provided by user.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    int L, U;

    cout << "Enter lower limit: ";
    cin >> L;

    cout << "Enter upper limit (exclusive): ";
    cin >> U;

    for(int i = L; i < U; i++)
    {
        cout << i << " "; 
    }
}