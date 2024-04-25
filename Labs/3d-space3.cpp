/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9C

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

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double x,y;
    x = length(p1);
    y = length(p2);
    if (x > y){
        return p1;
    }
    else {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    double x,y,z;
    
    (*ppos).x = (*ppos).x + (*pvel).x * dt;
    (*ppos).y = (*ppos).y + (*pvel).y * dt;
    (*ppos).z = (*ppos).z + (*pvel).z * dt;
    
    
}

int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
}
