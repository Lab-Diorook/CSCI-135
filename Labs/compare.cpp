/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 3C

Compares two east and west heights after inputting 2 dates.
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
    string date, udate1, udate2, junk;
    double eastSt, eastEl, westSt, westEl;
    bool print;

    ifstream fin("Current_Reservoir_Levels.tsv");
    getline(fin, junk); // read one line from the file

    if (fin.fail())
    {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }

    cout << "Enter starting date: ";
    cin >> udate1;

    cout << "Enter ending date: ";
    cin >> udate2;


    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
    { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 

    if (date >= udate1 && date <= udate2)
    {
        
        if (eastEl > westEl)
        {
            cout << date << " East" << endl;
        }

        else if (eastEl < westEl)
        {
            cout << date << " West" << endl;
        }

        else
        {
            cout << date << " Equal" << endl;
        }
    }
    }

    fin.close();
    return 0;
}