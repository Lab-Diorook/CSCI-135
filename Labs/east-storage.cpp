/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3A

Prints the basin storage of a certain date.
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
    string date, udate, junk;
    double eastSt, eastEl, westSt, westEl;

    ifstream fin("Current_Reservoir_Levels.tsv");
    getline(fin, junk); // read one line from the file

    if (fin.fail())
    {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }

    cout << "Enter date: ";
    cin >> udate;


    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 

    if (date == udate)
    {
        cout << "East basin storage: "<< eastSt << " billion gallons"<< endl;
        fin.close();
    }
    }

    fin.close();
    return 0;
}