/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12B

[description]
.
.
*/

#include <vector>
#include <iostream>
using namespace std;

vector<int> goodVibes(vector<int> v){
    vector<int> v2;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            v2.push_back(v[i]);
        }
    }
    return v2;
}

int main(){
    vector<int> v{1,2,-1,3,4,-1,6};
    
    goodVibes(v);
}