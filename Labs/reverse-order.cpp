/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3D

Prints the dates and West elavation in reverse order.
.
.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
using namespace std;

int main()
{
    string date, udate1, udate2, dDate[365], junk;
    double eastSt, eastEl, westSt, westEl, dwEl[365];
    int count = 0;

    ifstream fin("Current_Reservoir_Levels.tsv");
    getline(fin, junk); // read one line from the file

    if (fin.fail())
    {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }

    cout << "Enter earlier date: ";
    cin >> udate1;
    cout << "Enter later date: ";
    cin >> udate2;


    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    if (date >= udate1 && date <= udate2)
    {
        count += 1;
        dDate[count] = date;
        dwEl[count] = westEl;
    }
    }

    for (int i = count; i > 0; i--)
    {
        cout << dDate[i]<< " " << dwEl[i] << endl;
    }

    fin.close();
    return 0;
}