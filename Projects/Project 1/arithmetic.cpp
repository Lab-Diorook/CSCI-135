//Author: David Hou
//Email: david.houfeng85@myhunter.cuny.edu
//Course: CSCI-135
//Instructor: Tong Yi
//Assignment: Project 1A

//tests arithmetic.


#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    char oper[] = {'+', '-', '*', '/', '%'};

    int randoper = rand()%(5);
    int num1, num2, uAns, ans;
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

    cout << boolalpha << (uAns == ans);
}