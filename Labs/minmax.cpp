/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3B

Prints the max and min basin storage.
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
    string date, junk;
    double eastSt, eastStmin, eastStmax , eastEl, westSt, westEl;

    ifstream fin("Current_Reservoir_Levels.tsv");
    getline(fin, junk); // read one line from the file

    if (fin.fail())
    {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }


    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 

    if (eastStmax < eastSt)
    {
        eastStmax = eastSt;
    }

    if (eastStmin > eastSt || eastStmin == 0)
    {
        eastStmin = eastSt;
    }
    }

    cout << "minimum storage in East basin: "<< eastStmin << " billion gallons"<< endl;
    
    cout << "MAXimum storage in East basin: "<< eastStmax << " billion gallons"<< endl;

    fin.close();
    return 0;
}