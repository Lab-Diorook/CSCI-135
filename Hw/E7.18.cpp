/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E7.18

[description]
.
.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

struct Triangle
{
    Point a;
    Point b;
    Point c;
};

double perimeter(Triangle triangle)
{
    double ab = sqrt(pow(triangle.b.x - triangle.a.x, 2) + pow(triangle.b.y- triangle.a.y, 2));
    double ac = sqrt(pow(triangle.c.x - triangle.a.x, 2) + pow(triangle.c.y- triangle.a.y, 2));
    double bc = sqrt(pow(triangle.c.x - triangle.b.x, 2) + pow(triangle.c.y- triangle.b.y, 2));
    double total = ab + ac + bc;
    return total;
}

int main()
{
    Triangle tri;
    cin  >> tri.a.x >> tri.a.y;
    cin  >> tri.b.x >> tri.b.y;
    cin  >> tri.c.x >> tri.c.y;
    cout << perimeter(tri);

    return 0;
}
