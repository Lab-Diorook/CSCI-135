/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: E5.14

Program sorts 2 numbers.
.
.
*/

#include <iostream>
#include <cassert>
using namespace std;

void sort2(int& a, int& b)
{
    int temp;
    if (a>=b){
        temp = b;
        b = a;
        a = temp;
    }
    else {
        a = a;
        b = b;
    }
}

int main()
{
    int x,y;
    cout<<"enter number: ";
    cin>>x;
    cout<<"enter number: ";
    cin>>y;
    sort2(x, y);

    cout << x << " " << y<< endl;
    return 0;
}
