/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 12A

[description]
.
.
*/

#include <iostream>
#include <vector>

std::vector<int> makeVector(int n);

int main() {
    int a;
    
    std::cout << "Enter a number: ";
    std::cin >> a;

    std::vector<int> av = makeVector(a);

    std::cout << "\n" << "The vector size is " << av.size() << "\n";

    for(int i = 0; i < av.size(); i++) {
        std::cout << av[i] << " ";
    }
}

std::vector<int> makeVector(int n) {
    std::vector<int> temp;

    if(n > 0) {
        for(int i = 0; i < n; i++) {
            temp.push_back(i);
        }

        return temp;
    }

    return temp;
}