/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7A

This code removes spaces.
.
.
*/

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){
    int i;
    
    for (i = 0; i < line.size(); i++){
        if (!isspace(line[i])) {
            break;
        }
    }
    return line.substr(i);
}

int main(){
    string line;
    
    while (getline(cin,line)){
        cout << removeLeadingSpaces(line)<< endl;
    }
}