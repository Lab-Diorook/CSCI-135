//Author: David Hou
//Email: david.houfeng85@myhunter.cuny.edu
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Project 1A

//tests arithmetic.


#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    string ques, ans;
    double ansNum, quesNum, corrNum, letNum;

    ifstream fin("problems.csv");

    if (fin.fail())
    {
    cerr << "File can't be opened for reading" << endl;
      exit (1);
    }

    while (getline(fin,ques,',') && getline(fin,ans))
    {
        cout << ques << "? ";
        cin >> ansNum;

        if (ansNum == stod(ans))
        {
            cout << "true" <<endl;
            corrNum++;
        }

        else
        {
            cout << "false" <<endl;
        }
        
        quesNum++;
    }

    fin.close();

    letNum = (corrNum/quesNum)*100;
    cout << "percent: " << letNum << "%" << endl << "letter grade: ";

    if (letNum >= 90)
    {
        cout << "A.";
    }

    else if (letNum >= 80)
    {
        cout << "B.";
    }

    else if (letNum >= 70)
    {
        cout << "C.";
    }

    else if (letNum >= 60)
    {
        cout << "D.";
    }

    else
    {
        cout << "F.";
    }
}