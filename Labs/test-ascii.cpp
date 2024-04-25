/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 6A

[description]
.
.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    cout << "enter a line of texts: ";
    getline (cin, input);

    for(char c : input){
        
        cout << c << " " << (int)c << endl;
    }
    return 0;
}