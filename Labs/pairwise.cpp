/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12D

[description]
.
.
*/

#include <iostream>
#include <vector>

std::vector<int> sumPairWise(std::vector<int> &v1, std::vector<int> &v2); 

int main() {
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};

    std::vector<int> v3 = sumPairWise(v1, v2); // returns [5, 7, 3]

    std::cout << "returns [" << v3[0];

    for(int i = 0; i < v3.size(); i++) {
        std::cout <<", " << v3[i];
    }

    std::cout << "]";

    return 0;
}

std::vector<int> sumPairWise(std::vector<int> &v1, std::vector<int> &v2) {
    std::vector<int> v3;

    while(v1.size() > v2.size()) {
        v2.push_back(0);
    }

    while(v2.size() > v1.size()) {
        v1.push_back(0);
    }

    for(int i = 0 ; i < v2.size(); i++) {
        v3.push_back(v1[i]+ v2[i]);
    }
    
    return v3;
}