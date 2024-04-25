/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12C

[description]
.
.
*/

#include <iostream>
#include <vector>
using namespace std;

void gotenks(vector<int> &goten, vector<int> &trunks); 

int main() {
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    for(int i = 0; i < v1.size(); i++) {
        cout << "element " << i<< "v1:"<< v1[i] << " v2: " << v2[i] << ".\n";
    }

    gotenks(v1,v2);

    for(int i = 0; i < v1.size(); i++) {
        cout << "element "<< i << " v1 " << v1[i] << "\n";
    }

    for(int i = 0; i < v2.size(); i++) {
        cout << " v2: " << v2[i] << ".\n";
    }

    return 0;
}

void gotenks(vector<int> &goten, vector<int> &trunks) {
    for(int i = 0; i < trunks.size(); i++) {
        goten.push_back(trunks[i]);
    }
    
    trunks.clear();
}