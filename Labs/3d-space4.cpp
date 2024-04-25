/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9E

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

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *p = new Coord3D;
    
    p->x = x;
    p->y = y;
    p->z = z;
    return p;
}

// free memory
void deleteCoord3D(Coord3D *p){
    delete p;
}

int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}