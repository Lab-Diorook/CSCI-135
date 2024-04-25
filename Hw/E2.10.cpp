/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E2.10

Miles per gallon calculator.
.
.
*/

#include <iostream>
using namespace std;

int main()
{
    double gallon;
    double efficiency;
    double price;

    cout << "Enter number of gallons in tank: ";
    cin >> gallon;

    cout << "Enter fuel efficiency: ";
    cin >> efficiency;

    cout << "Enter price per gallon: ";
    cin >> price;
    
    cout << "Gallon costs $" << ((100/efficiency)*price) << "per 100 miles and you will travel " << (gallon*efficiency);
}