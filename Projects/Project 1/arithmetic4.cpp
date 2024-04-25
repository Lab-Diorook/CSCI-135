/*
Author: David Hou
Email: david.houfeng85@myhunter.cuny.edu
Course: CSCI-135
Instructor: Tong Yi
Assignment: project 1D

reads a csv file and randomizes the questions, stops when grade is above 60%
.
.
*/

#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int size = 0;
    string formula, result;
    double score = 0, total, correct_questions = 0;
    string question[20], answer[20];
    fstream file ("problems.csv");
    srand(time(0));

    if (!file.is_open())
    {
        cout << "File cannot be opened for reading." << endl;
    }

    while (getline(file, question[size], ','))
    {
        getline(file, answer[size]);
        size++;

        if (size == 19)
        {
            break;
        }
    }

    total = size;

    for (int i = 0; i <= size; size--)
    {
        double user_input;
        int t = size;

        if(size != 0)
        {
            t = rand()%size;
        }

        cout << question[t] << "? ";
        cin >> user_input;

        if (stod(answer[t]) == user_input)
        {
            cout << "true" << endl;
            correct_questions++;
        }

        else
        {
            cout << "false" << endl;
        }

        swap(question[t],question[size-1]);
        swap(answer[t],answer[size-1]);

        question[size];
        answer[size];
        

        score = (correct_questions/total) * 100;

        if (score >= 60)
        {
            break;
        }
    }

    cout << "percentage: " << score << '%' << endl;

    file.close();
    return 0;
}