/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.15

Program sorts 3 numbers.
.
.
*/

#include <iostream>
#include <cassert>
using namespace std;

void sort3(int &a, int &b, int &c)
{
    int temp;
    if (a >= b){
        temp = b;
        b = a;
        a = temp;
        if (b >= c){
            temp = c;
            c = b;
            b = temp;
            if (a >= b){
                temp = b;
                b = a;
                a = temp;
            }
        }
        else{
            b = b;
            c = c;
        }
    }
    else if (a <= b){
        a = a;
        b = b;
        if (b >= c){
            temp = c;
            c = b;
            b = temp;
            if (a >= b){
                temp = b;
                b = a;
                a = temp;
            }
        }
        else{
            b = b;
            c = c;
        }
    }
    else {
        a = a;
        b = b;
        c = c;
    }
}

int main()
{
    int x,y,z;
    cout << "enter number: ";
    cin >> x;
    cout << "enter number: ";
    cin >> y;
    cout << "enter number: ";
    cin >> z;
    sort3(x, y, z);

    cout << x << " " << y << " " << z << endl;
    return 0;
}
