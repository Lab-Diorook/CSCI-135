/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.16

[description]
.
.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    double x;
    double y;
};

double distance(Point a, Point b){
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main()
{
    Point a;
    Point b;
    cout << "Enter x cordinate for point 1: ";
    cin >> a.x;
    cout << "Enter y cordinate for point 1: ";
    cin >> a.y;
    cout << "Enter x cordinate for point 2: ";
    cin >> b.x;
    cout << "Enter y cordinate for point 2: ";
    cin >> b.y;
    cout << distance(a, b) << endl;
    return 0;
}