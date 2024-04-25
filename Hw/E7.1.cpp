/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: 

[description]
.
.
*/

#include <iostream>
using namespace std;

void sort2(double *p, double *q){
    double swap = 0;
    if(*p > *q){
        swap = *p;
        *p = *q;
        *q = swap;
    }

    
}

int main(){
    double x = 0;
    double y = 0;
    cout << "Enter a number for x ";
    cout << "Enter a number for y ";
    cin >> x;
    cin >> y;
    sort2(&x, &y);

    return 0;
}