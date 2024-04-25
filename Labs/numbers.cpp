/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 5A

Tests if a number is divisible.
.
.
*/

#include <iostream>     //normal

using namespace std;

bool isDivisibleBy(int n, int d);       //initiate bool

int main(){
    int n,d;
    cout << "enter 2 numbers: ";        //store 2 numbers
    cin >> n >> d;
    
    cout << isDivisibleBy(n,d) << endl;     //do function
    return 0;
}
// Part A implementation
bool isDivisibleBy(int n, int d){
    if (d==0){                      //d cannot be 0
        return false;
    }
    else if (n%d ==0){ 
        return true; //check the remainder
    }
    else{
        return false; //"else if" but not including within an else if
    }
    
}   