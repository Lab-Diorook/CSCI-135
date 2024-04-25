//
/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 3B

[description]
.
.
*/

#include "Tortoise.hpp"
#include <cstdlib> //rand
using namespace std;

Tortoise::Tortoise() : patterns({3,3,3,3,3,-6,-6,1,1,1}), position(0){
    
}

Tortoise::Tortoise(vector<int> patterns, int position): position(position), patterns(patterns) {
    
}

Tortoise::Tortoise(int* arr, int size, int position){

    patterns.reserve(size);
    for (int i = 0; i < size; i++){
        patterns.push_back(arr[i]);
    }
    this->position = position;
}

void Tortoise::move(){

    int random_index = rand() % patterns.size();

    // Move the hare according to its move pattern at the randomly chosen index
    position += patterns[random_index];
}

int Tortoise::getPosition() const{
    return position;
}

void Tortoise::setPosition(int position){
    this->position = position;
}
