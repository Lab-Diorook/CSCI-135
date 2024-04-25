/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9D

[description]
.
.
*/

#include <iostream> 
using namespace std;  
string * createAPoemDynamically() {
    string *p = new string; 
    *p = "Roses are red, violets are blue"; 
    return p;  
}  

int main()  {
    while(true) {
        string *p; 
        p = createAPoemDynamically(); 
        if (!p) {
            break;
        } // assume that the poem p is not needed at this point 
        cout << *p << endl;
        delete p;
    } 
}
