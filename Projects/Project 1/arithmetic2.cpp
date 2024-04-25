//Author: David Hou
//Email: david.houfeng85@myhunter.cuny.edu
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Project 1B

//tests arithmetic with a custom number of questions.


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    char oper[] = {'+', '-', '*', '/', '%'};
    int num1, num2, uAns, ans;
    double qNum, score, letNum;

    cout << "Enter the number of questions to answer (not negative): ";
    cin >> qNum;
    
    while (qNum <= 0)
    {
        cout << "The number of questions cannot be zero or negative. Re-enter: ";
        cin >> qNum;
    }


    for (int i = 0; i < qNum; i++)
    {
        int randoper = rand()%(5);
        num1 = rand()%(10);
        

        if (randoper == 3 || randoper == 4)
        {
            num2 = rand()%(9)+1;
        }

        else
        {
            num2 = rand()%(10);
        }
        if (randoper == 0)
        {
            ans = num1 + num2;
        }

        if (randoper == 1)
        {
            ans = num1 - num2;
        }

        if (randoper == 2)
        {
            ans = num1 * num2;
        }

        if (randoper == 3)
        {
            ans = num1 / num2;
        }

        if (randoper == 4)
        {
            ans = num1 % num2;
        }
    
        cout << "What is " << num1 << " " << oper[randoper] << " " << num2 << endl;
        cin >> uAns;

        if(uAns == ans)
        {
            cout << "true" << endl;
            score += 1;
        }

        else
        {
            cout << "false" << endl;
        }
    }

    letNum = (score/qNum)*100;

    cout << "percentage correct: " << letNum << "%.\nletter grade: "; 

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