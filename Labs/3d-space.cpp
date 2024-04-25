/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9A

[description]
.
.
*/

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
    public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p)
{
    double x, y, z;
    x = p->x;
    y = p->y;
    z = p->z;
    double length = sqrt((x*x)+(y*y)+(z*z));
    return length;
}

int main() {
    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; 
}
