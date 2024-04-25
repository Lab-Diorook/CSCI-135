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

bool equals(int a[], int a_size, int b[], int b_size){
    if (a_size != b_size){
        return false;
    }
    for (int i = 0; i < a_size; i++){
        if (a[i] != b[i]){
            return false;
        }
        else{
            return true;
        }
    }
    return true;
}

int main(){
    
    return 0;
    
}