/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project 2C

[description]
.
.
*/

#include "MemoryGame.hpp"
#include<iomanip>
#include<iostream>
using namespace std;

MemoryGame::MemoryGame()
{
    //Set data member numPairs to be 3
    numPairs = 3;
    //Set data member numSlots to be 8
    numSlots = 8;
    /*Allocate dynamic memory for an array of strings with numSlots elements and assign it to data member
values. Generate three random integers in [0, 999]*/
    values = new string[numSlots];

    for (int i = 0; i < numSlots; i+=2)
    {
        if (i >= numPairs*2)
        {
            values[i] = "";
            values[i+1] = "";
        }

        else
        {
            int rNum = rand() % 1000;
            values[i] = to_string(rNum);
            values[i+1] = to_string(rNum);
        }
    }
    
    /*Allocate dynamic memory for an array of booleans – type bool in C++ – with numSlots elements and assign
it to data member bShown. Set each element of bShown to be false*/
    bShown = new bool[numSlots];
    for (int i = 0; i < numSlots; i++)
    {
        bShown[i] = false;
    }
}

MemoryGame::MemoryGame(int numPairs, int numSlots)
{
    //if numPairs or numSlots is non-pos or numSlots < 2*numPairs
    if (numPairs <= 0 || numSlots <= 0 || numSlots < 2 * numPairs)
    {
        //Set data member numPairs to be 3
        this->numPairs = 3;
        //Set data member numSlots to be 8
        this->numSlots = 8;
    }

    else
    {
        //Set data member numPairs by formal parameter numPairs
        this->numPairs = numPairs;
        //Set data member numSlots by formal parameter numSlots
        this->numSlots = numSlots;
    }
    /*Allocate dynamic memory for an array of strings with numSlots elements and assign it to data member
values. Generate numPairs random integers in [0, 999], place the first integer to the first two slots of
values, the second integer to the next two slots of values, · · · , until all integers are placed in pairs in
values. Set the rest elements of values to be empty strings.*/
    values = new string[numSlots];
    for (int i = 0; i < numPairs; i++)
    {
        int n = rand() % 1000;
        values[i * 2] = to_string(n);
        values[i * 2 + 1] = to_string(n);
    }

    for (int i = numPairs * 2; i < numSlots; i++)
    {
        values[i] = "";
    }
    
    /*Allocate dynamic memory for an array of booleans – type bool in C++ – with numSlots elements and assign
it to data member bShown. Set each element of bShown to be false.*/
    bShown = new bool[numSlots];
    for (int i = 0; i < numSlots; i++)
    {
        bShown[i] = false;
    }
}

MemoryGame::MemoryGame(string* words, int size, int numSlots)
{
    /*Assume the number of elements in formal parameter words is size. If formal parameters size or numSlots
is non-positive or numSlots is smaller than twice of size, set numSlots to be twice of size */
    if (size <= 0 || numSlots <= 0 || numSlots < 2 * size)
    {
        numSlots = 2 * size;
    }
    //Set data member numPairs to be size
    numPairs = size;
    //Set data member numSlots to be numSlots
    this->numSlots = numSlots;
/*Allocate dynamic memory for an array of strings with numSlots elements and assign it to data member
values. Place the first word to the first two slots of values, the second word to the next two slots of
values, · · · , until all words are placed in pairs in values. Set the rest elements of values to be empty
strings.*/
    values = new string[numSlots];
    for (int i = 0; i < size; i++)
    {
        values[i * 2] = words[i];
        values[i * 2 + 1] = words[i];
    }
    
    for (int i = size * 2; i < numSlots; i++)
    {
        values[i] = "";
    }
    /*Allocate dynamic memory for an array of booleans – type bool in C++ – with numSlots elements and assign it to a data member bShown. Set each element of bShown to be false.*/
    bShown = new bool[numSlots];
    for (int i = 0; i < numSlots; i++)
    {
        bShown[i] = false;
    }
}

/*Release dynamically allocated memory allocated to data member values. Set values to be nullptr to avoid
dangling pointer problem. Do similar things to data member bShown.*/
MemoryGame::~MemoryGame()
{
    // Deallocate values array if it has been allocated
    if (values != nullptr)
    {
        delete[] values;
        values = nullptr;
    }
    
    // Deallocate bShown array if it has been allocated
    if (bShown != nullptr)
    {
        delete[] bShown;
        bShown = nullptr;
    }
}

void MemoryGame::randomize()
{
    int size = numSlots;
    do
    {
        int randNum = rand()% size;
        swap(values[randNum], values[size-1]);
        size--;
    }
    while (size > 1);
}

void printSeparatedLine(int size)
{
    cout << "+"; // The first '+'
    for (int i = 0; i < size; i++)
    {
        cout << "-----+"; // Draw '-----+' for the length of the grid
    }
    cout << endl; // End the line
}

void MemoryGame::display() const
{
    cout<<" ";

    for (int i = 0; i < numSlots; i++)
    {
        cout << setw(3) << i << setw(3) << " ";
    }
    cout << endl;

    printSeparatedLine(numSlots);

    cout<<"|";

    for (int i = 0; i < numSlots; i++)
    {
        if(bShown[i])
        {
            cout << setw(5) << values[i] << "|";
        }

        else
        {
            cout<<"     |";
        }
    }

    cout<<endl;
    printSeparatedLine(numSlots);
}